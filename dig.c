#include<stdio.h>
int main() 
{
   int n,p=1,m;
   scanf("%d",&n);
   while(n!=0)
   {
       m=n%10;
       p=p*m;
       n=n/10;
   }
   printf("%d",p);
   return 0;
}
