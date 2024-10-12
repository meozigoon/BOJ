#include<stdio.h>

int main()
{
    int a[5];
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    int ans=0;
    for(int i=0;i<5;i++)
    {
        ans+=a[i]*a[i];
    }
    ans%=10;
    printf("%d",ans);
    return 0;
}