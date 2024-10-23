#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=3&&b<=4)
    {
        puts("TroyMartian");
    }
    if(a<=6&&b>=2)
    {
        puts("VladSaturnian");
    }
    if(a<=2&&b<=3)
    {
        puts("GraemeMercurian");
    }
    return 0;
}