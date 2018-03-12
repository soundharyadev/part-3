#include <stdio.h>
#include<string.h>
int main() 
{
	int i,j,temp=0;
	char a[100];
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		printf("%c",a[i]);
	}
	return 0;
}
