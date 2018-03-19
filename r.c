#include <stdio.h>
 
int main()
{
  int n,i,r[10];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&r[i]);
      if(r[i]!=i)
      {
          printf("%d",i);
      }
  }
   return 0;
}
