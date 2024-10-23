#include<stdio.h>

int main()
{
    int a,ans=0;
    while(1)
    {
        scanf("%d",&a);
        if(a==-1)
        {
            break;
        }
        else
        {
            ans+=a;
        }
    }
    printf("%d",ans);
    return 0;
}