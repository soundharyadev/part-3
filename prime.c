#include<stdio.h>
void main()
{
	int n,i, count;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
		
			if(count==0)
			{
				printf("prime number");
			}
			else
			{
				printf("no");
			}

}
