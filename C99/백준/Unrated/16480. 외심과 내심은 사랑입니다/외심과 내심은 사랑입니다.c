#include<stdio.h>

int main()
{
    unsigned long long R,r;
    scanf("%lld %lld",&R,&r);
    printf("%lld",R*(R-2*r));
    return 0;
}