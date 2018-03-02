#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i=0,count=0;
clrscr();
scanf("%s",&a);
while(a[i]!='\0')
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
count=1;
}
i++;
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


