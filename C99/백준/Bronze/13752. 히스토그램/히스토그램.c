#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int a;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=0;j<a;j++)
        {
            printf("=");
        }
        printf("\n");
    }
    return 0;
}