#include<stdio.h>
#include<conio.h>
void main()
{
int a, b,c;
clrscr();
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
c=a*b;
if(c%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}
getch();
}
