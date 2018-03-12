#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,i;
char z;
clrscr();
for(i=0;i<=4;i++)
{
scanf("%d  %c  %d",&x,&z,&y);
if(z=='/')
{
int c;
c=x/y;
printf("%d",c);
}
else
{
int d;
d=x%y;
printf("%d",d);
}
}
getch();
}
