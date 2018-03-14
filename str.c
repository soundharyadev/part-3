#include<stdio.h>
#include<conio.h>
void main()
{
char p[50];
clrscr();
printf("enter the string:");
scanf("%s",&p);
printf("%c",p[0]);
printf("%c",p[2]);
printf("%c",p[4]);
printf("\n %c",p[1]);
printf("%c",p[3]);
getch();
}
