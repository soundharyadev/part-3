#include<stdio.h>
#include<conio.h>
void main()
{
char a[200];
int i=0,count=0;
clrscr();
scanf("%s",&a);
while(a[i]!='\0')
{
a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u';
count++;
}
if(count==1)
{
printf("yes");
}
else
{
printf("No");
}
getch();
}

