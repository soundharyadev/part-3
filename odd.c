#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
printf("Enter the number");
scanf("%d",&a);
b=a/100;
c=a%100;
d=c/10;
e=c%10;
if(b%2==0||d%2==0||e%2==0)
{
printf(" ");
}
if(b%2!=0)
{
printf("%d\n",b);
}
if(d%2!=0)
{
printf("%d\n",d);
}
if(e%2!=0)
{
printf("%d\n",e);
}
getch();
}
