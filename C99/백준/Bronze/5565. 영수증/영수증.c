#include<stdio.h>

int main()
{
    int a,b[9];
    scanf("%d",&a);
    for(int i=0;i<9;i++)
    {
        scanf("%d",&b[i]);
        a-=b[i];
    }
    printf("%d",a);
    return 0;
}