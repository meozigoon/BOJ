#include<stdio.h>

int main()
{
    int k,d1,d2;
    scanf("%d",&k);
    scanf("%d %d",&d1,&d2);
    float a;
    if(d1==d2)
    {
        printf("%d",k*k);
    }
    else if(d1-d2%2!=0)
    {
        a=(d1-d2);
        a /= 2;
        printf("%f",k*k-a*a);
    }
    else
    {
        printf("%d",k*k-((d1-d2)/2)*((d1-d2)/2));
    }
    return 0;
}