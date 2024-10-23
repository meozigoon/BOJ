#include<stdio.h>

int main()
{
    int a[100];
    int i;
    int k;
    int cnt=0;
    for(i=0;i<100;i++)
        a[i]=1;
    int st;
    scanf("%d",&st);
    for(i=0;i<st;i++)
    {
        scanf("%d ",&k);
        if(a[k]==0)
            cnt++;
        else
            a[k]=0;
    }
    printf("%d",cnt);
    return 0;
}