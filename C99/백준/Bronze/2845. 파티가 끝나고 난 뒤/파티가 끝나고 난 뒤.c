#include<stdio.h>

int main()
{
    int n,m;
    int p;
    int a1,a2,a3,a4,a5;
    scanf("%d %d",&n,&m);
    p=m*n;
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
    printf("%d %d %d %d %d",a1-p,a2-p,a3-p,a4-p,a5-p);
    return 0;
}