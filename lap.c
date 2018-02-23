#include<stdio.h>
void main()
{
	char a[30];
gets(a);
	int n,i;
	printf("Enter how many characters to be displayed:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
}
