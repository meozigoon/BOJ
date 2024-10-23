#include<stdio.h>

int main()
{
    float b,c;
    scanf("%f %f",&c,&b);
    int a=c/b;
    if(c/b==a)
    {
        printf("%d",a);
    }
    else
    {
        printf("%0.7f",c/b);
    }
    return 0;
}