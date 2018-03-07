#include <stdio.h>

#include<string.h>

void main()

{

char a[50];
int b,i,c,d;
clrscr();
scanf("%s",a);

b=strlen(a);
c=b/2;
if(b%2==0)

{

a[c]='*';

a[(c)-1]='*';

}

else

{

a[c]='*';

}

printf("\n%s",a);
getch();
}
