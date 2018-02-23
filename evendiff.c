#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
c=a-b;
if(c%2==0)
{
printf("Even");
}
else
{
printf("No");
}
}
