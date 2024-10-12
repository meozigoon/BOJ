#include<stdio.h>

int main()
{
    long a,b;
    scanf("%ld %ld",&a,&b);
    if(b>=a)
    {
        printf("%d",(b-a+1)*(a+b)/2);
    }
    if(b<a)
    {
        printf("%d",(a-b+1)*(a+b)/2);
    }
    return 0;
}