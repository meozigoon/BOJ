#include <stdio.h>

int main()
{
    int a[7];
    int ans=0;
    int min=10000000;
    int cnt=0;
    for(int i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
        {
            ans+=a[i];
            if(min>a[i])
            {
                min=a[i];
            }
            cnt++;
        }
    }
    if(cnt==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d",ans,min);   
    }
    return 0;
}
