#include<stdio.h>

int main()
{
    int x,n,a,b;
    int pri=0;
    scanf("%d",&x);
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        pri+=a*b;
    }
    if(pri==x)
        printf("Yes");
    else
        printf("No");
    return 0;
}