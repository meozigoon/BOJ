#include<stdio.h>

int main(void)
{
    int i;
    int a;
    int ans=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        ans+=a;
    }
    printf("%d",ans);
    return 0;
}
