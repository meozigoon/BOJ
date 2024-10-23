#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a=1+(n-1)*2;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for(int k=a;k>0;k--)
        {
            printf("*");
        }
        a-=2;
        printf("\n");
    }
    return 0;
}