#include<stdio.h>
 
int main()
{
    int n;
    int sum=0;
    int i;
    for(i=0;i<6;i++)
    {
        scanf("%d",&n);
        sum+=n*5;
    }
    printf("%d",sum);
    return 0;
}