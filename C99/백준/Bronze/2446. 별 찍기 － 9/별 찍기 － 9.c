#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int b=1+(n-1)*2;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int k=b;k>0;k--)
        {
            printf("*");
        }
        b-=2;
        printf("\n");
    }
    int a=1;
    for(int i=n;i>0;i--)
    {
        for(int j=i-1;j>0;j--)
        {
            printf(" ");
        }
        for(int k=0;k<a;k++)
        {
            printf("*");
        }
        a+=2;
        printf("\n");
    }
    return 0;
}