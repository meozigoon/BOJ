#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int v,e;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&v,&e);
        printf("%d\n",e-v+2);
    }
    return 0;
}