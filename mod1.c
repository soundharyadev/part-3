#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,mod,mod1;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("Enter the value of c:");
scanf("%d",&c);
mod1=a*b;
mod=mod1%c;
printf("%d",&mod);
getch();
}
