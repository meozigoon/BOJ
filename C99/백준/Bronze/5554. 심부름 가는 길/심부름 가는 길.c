#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int ans=a+b+c+d;
    int m=ans/60;
    int s=ans%60;
    printf("%d\n%d",m,s);
    return 0;
}