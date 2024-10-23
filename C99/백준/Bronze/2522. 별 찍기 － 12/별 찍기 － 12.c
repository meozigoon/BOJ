#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(int k=0;k<i+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    int a=n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int k=0;k<a;k++)
        {
            printf("*");
        }
        a--;
        printf("\n");
    }
    return 0;
}