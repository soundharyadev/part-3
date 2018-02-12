#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("1\n 2.\n 3.\n 4.\n 5.\n 6.\n 7.\n 8.\n 9.\n 10\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("one");
break;
case 2:
printf("Two");
break;
case 3:
printf("Three");
break;
case 4:
printf("four");
break;
case 5:
printf("five");
break;
case 6:
printf("six");
break;
case 7:
printf("Seven");
break;
case 8:
printf("Eight");
break;
case 9:
printf("Nine");
break;
case 10:
printf("Ten");
break;
default:
printf("Two");
break;
}
getch();
}






