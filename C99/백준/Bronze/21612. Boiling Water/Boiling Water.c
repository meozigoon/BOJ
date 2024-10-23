#include<stdio.h>

int main()
{
    int b;
    scanf("%d",&b);
    int p;
    p=5*b-400;
    printf("%d\n",p);
    if(b>100)
    {
        printf("-1");
    }
    else if(b==100)
    {
        printf("0");
    }
    else if(b<100)
    {
        printf("1");
    }
    return 0;
}