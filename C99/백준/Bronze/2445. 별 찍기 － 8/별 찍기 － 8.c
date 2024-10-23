#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=(n-1)*2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("*");
        }
        for(int k=0;k<a;k++)
        {
            printf(" ");
        }
        a-=2;
        for(int l=0;l<i+1;l++)
        {
            printf("*");
        }
        printf("\n");
    }
    int b=n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("*");
        }
        for(int k=0;k<i*2;k++)
        {
            printf(" ");
        }
        for(int j=0;j<b;j++)
        {
            printf("*");
        }
        b--;
        printf("\n");
    }
    return 0;
}