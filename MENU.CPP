#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<process.h>
int x=10,y=100,ch=1,i=0;
void draw(char st[20])
{
setbkcolor(0);
if(i+1==ch)
{
 setcolor(1);
}
else
 setcolor(2);

 rectangle(x,y,x+100,y+20);
 if(i+1==ch)
 {
 setfillstyle(SOLID_FILL,1);
 //floodfill(x+1,y+1,GREEN);

 }
if(ch==i+1){
 setcolor(15);
 }else{
 setcolor(1);
 }
 outtextxy(x+15,y+5,st);
}

int main()
{

int gd=DETECT,gm;
char st[4][20]={"option 1","option 2","option 3","exit"};
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
while(1)
{
x=10,y=100;
cleardevice();
setbkcolor(13);
for(i=0;i<4;i++,y+=30)
{

draw(st[i]);
}
int c=getch();
switch(c)
{
case 72:  ch--;
	  if(ch==0)
	    ch=4;
	  break;
case 80: ch++;
	 if(ch==5)
	 ch=1;
	 break;

case 13: switch(ch)
	 {
		 case 1:cout<<"you selected option 1 ";
		 getch();
		 break;
		 case 2:cout<<"you selected option 2 ";
		 getch();
		 break;
		 case 3:cout<<"you selected option 3 ";
		 getch();
		 break;
		 case 4:
		 exit(0);
		 //cout<<"you selected option 4 ";
		 //getch();
		 //break;
	 }
	 break;
case 'X':
case 'x':exit(1);
}
}
getch();
return 0;
}