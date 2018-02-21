#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("%d",a);
	}
	else
	{
		a=a-1;
		if(a%2==0)
		printf("%d",a);
	}
	return 0;
}
