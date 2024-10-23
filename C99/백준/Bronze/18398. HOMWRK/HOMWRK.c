#include<stdio.h>

int main()
{
    int t;
    int n;
    int a,b;
    scanf("%d",&t);
    int i,j;
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d %d",&a,&b);
            printf("%d %d\n",a+b,a*b);
        }
    }
    return 0;
}