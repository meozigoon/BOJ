#include<stdio.h>

int main()
{
    int k,a,d;
    scanf("%d/%d/%d",&k,&d,&a);
    if(d==0||k+a<d)
    {
        printf("hasu");
    }
    else
    {
        printf("gosu");
    }
    return 0;
}