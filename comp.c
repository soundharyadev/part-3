#include<stdio.h>
void main()
{
	int n,i, c;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
		
			if(c==0)
			{
				printf("Not composite");
			}
			else
			{
				printf("Composite number");
			}

}
