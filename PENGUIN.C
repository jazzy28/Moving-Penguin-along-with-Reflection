#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main(){
int gd = DETECT, gm;
int i;
int y1=52;
int y2=55;
int y2in=55;
int p1=358;
int p2= 355;
int p2in= 355;
int u=0;
clrscr();
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

for(i=10; i<=400; i++)
{
//head
line(80+i,30,70+i,60);
line(70+i,60,130+i,60);
line(80+i,30,110+i,20);
line(130+i,60,120+i,30);
line(110+i,20,120+i,30);
//eye
circle(110+i,35,4);
circle(110+i,35,0);
//beak
if(y1==y2in){
	while(y2in!=y2){
	y2in++;
	}
}else{
y2in--;}
rectangle(120+i,y2in,170+i,53);
//line(120+i,53,170+i,(i%2==0)?(53-12):53);
//line(120+i,56,170+i,(i%2==0)?(56-12):56);
//line(120+i,(i%2==0)?(53-10):53,120+i,(i%2==0)?(56-10):56);
//line(170+i,(i%2==0)?(56-10):56,170+i,(i%2==0)?(53-10):53);

line(120+i,50,170+i,50);
line(120+i,50,124+i,39);
line(124+i,39,170+i,45);
line(170+i,45,170+i,50);
//body
line(77+i,55,117+i,55);
circle(98+i,57,2);
line(77+i,55,55+i,150);
line(117+i,55,140+i,150);
line(55+i,150,75+i,180);
line(140+i,150,128+i,180);
line(75+i,180,128+i,180);
//arm
line(86+i,90,113+i,90);
line(86+i,90,93+i,128);
line(113+i,90,105+i,128);
line(93+i,128,105+i,128);
circle(100+i,95,2);
//right leg
circle(125+i,171,2);
line(117+i,165,130+i,163);
line(117+i,165,124+i,197);
line(130+i,163,137+i,195);
line(124+i,197,137+i,195);
circle(130+i,189,2);
if(i%2==0){
u=u+4;
delay(10);
}else{
u=u-4;
delay(10);
}
line(124+i,192+u,160+i,198+u);
line(124+i,192+u,127+i,185+u);
line(127+i,185+u,161+i,188+u);
line(160+i,198+u,161+i,188+u);
//left leg
circle(80+i,171,2);
line(75+i,164,69+i,198);
line(75+i,164,86+i,165);
line(86+i,165,83+i,199);
line(69+i,198,83+i,199);
circle(76+i,194,2);
if(i%2==0){
u=u+4;
delay(10);
}else{
u=u-4;
delay(10);
}
line(69+i,198+u,75+i,188+u);
line(77+i,188+u,104+i,191+u);
line(104+i,191+u,99+i,202+u);
line(99+i,202+u,69+i,196+u);
//horizontal line
line(0,205,700,205);

//Reflection
//head
line(80+i,380,70+i,350);
line(70+i,350,130+i,350);
line(80+i,380,110+i,390);
line(130+i,350,120+i,380);
line(110+i,390,120+i,380);
//eye
circle(110+i,375,4);
circle(110+i,375,0);
//beak
if(p1==p2in){
	while(p2in!=p2){
	p2in--;
	}
}else{
p2in++;}
rectangle(120+i,p2in,170+i,357);
line(120+i,360,170+i,360);
line(120+i,360,124+i,371);
line(124+i,371,170+i,365);
line(170+i,365,170+i,360);
//body
line(77+i,355,117+i,355);
circle(98+i,353,2);
line(77+i,355,55+i,260);
line(117+i,355,140+i,260);
line(55+i,260,75+i,230);
line(140+i,260,128+i,230);
line(75+i,230,128+i,230);
//arm
line(86+i,320,113+i,320);
line(86+i,320,93+i,282);
line(113+i,320,105+i,282);
line(93+i,282,105+i,282);
circle(100+i,315,2);
//right leg
circle(125+i,239,2);
line(117+i,245,130+i,247);
line(117+i,245,124+i,213);
line(130+i,247,137+i,215);
line(124+i,213,137+i,215);
circle(130+i,221,2);
 if(i%2==0){
u=u-4;
delay(20);
}else{
u=u+4;
delay(20);
}
line(124+i,218+u,160+i,212+u);
line(124+i,218+u,127+i,225+u);
line(127+i,225+u,161+i,222+u);
line(160+i,212+u,161+i,222+u);
//left leg
circle(80+i,240,2);
line(75+i,246,69+i,212);
line(75+i,246,86+i,245);
line(86+i,245,83+i,211);
line(69+i,212,83+i,211);
circle(76+i,217,2);
 if(i%2==0){
u=u-4;
}else{
u=u+4;
}
line(69+i,212+u,75+i,222+u);
line(75+i,222+u,104+i,219+u);
line(104+i,219+u,99+i,208+u);
line(99+i,208+u,69+i,214+u);

delay(10);
cleardevice();
}
getch();
}