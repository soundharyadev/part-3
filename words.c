#include <stdio.h>
#define SIZE 100 


int main()
{
    char str[SIZE];
    char * s = str;
    int alphabets, d, others,a;

    alphabets = d = others = 0;
    printf("Enter any string : ");
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alphabets++;
        else if(*s>='0' && *s<='9')
            d++;
        else
            others++;

        s++;
        a=alphabets+d+others;
    }
    printf("%d\n",a);

    return 0;
}
