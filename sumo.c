#include<stdio.h>
int main()
{
int sum=0,n,i,p[10];
printf("enter the num\n");
scanf("%d",&n);
for(i=0;p[i]!='\0';i++)
  {
  scanf("%d",&p[i]);
  sum=sum+p[i];
}
printf("%d",sum);
return 0;
}
