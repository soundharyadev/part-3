#include <stdio.h>
int main()
{
    int x, y, i, gcd, lcm;
    scanf("%d %d",&n1,&n2);
    for(i=1; i <= x && i <= y; ++i)
    {   
        if(x%i==0 && y%i==0)
            gcd = i;
    }
}
