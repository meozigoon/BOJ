#include<stdio.h>

int main()
{
    int min[4], man[4];
    int m=0,n=0;
    int i;
    scanf("%d %d %d %d",&min[0],&min[1],&min[2],&min[3]);
    scanf("%d %d %d %d",&man[0],&man[1],&man[2],&man[3]);
    for(i=0;i<4;i++)
    {
        m+=min[i];
        n+=man[i];
    }
    if(m>n)
        printf("%d",m);
    else
        printf("%d",n);
    return 0;
}