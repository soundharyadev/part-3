#include<stdio.h>
void main(){
int a,i;
printf("Enter the number:");
scanf("%d",&a);
for(i=a;;i++)
{
if(i%10==0)
{
printf("%d",i);
break;
}
}
}
