#include <stdio.h>
#include<string.h>
int main() 
{
	int i,j,t=0;
	char p[100];
	gets(p);
	for(i=0;p[i]!='\0';i++)
	{
		for(j=i+1;p[j]!='\0';j++)
		{
			if(p[i]>p[j])
			{
				t=p[i];
				p[i]=p[j];
				p[j]=t;
			}
		}
	}
	puts(p);
  return 0;
}
