#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c[10],d,i;
printf("enter the number :");
scanf("%d",&a);
printf("enter the number place:");
scanf("%d",&b);
for(i=0;i<=a;i++)
{
scanf("%d",&c[i]);
}
printf("%d",c[b]);

getch();
}
