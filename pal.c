#include<stdio.h>
#include<conio.h>
#nclude<string.h>
void main()
{
char x[50],y[50];
clrscr();
scanf("%s",&x);
strcpy(y,x);
strrev(y);
if(strcmp(x,y)==0)
{
printf("YES");
}
else
{
printf("NO");
}
getch();
}
