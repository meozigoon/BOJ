#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
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