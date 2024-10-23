#include<stdio.h>

int main()
{
    unsigned long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a*a-b*b);
    return 0;
}