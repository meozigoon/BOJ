#include<stdio.h>

int main()
{
    char a[8][8];
    int i;
    int cnt=0;
    int j;
    for(i=0;i<8;i++)
    {
        scanf("%s",a[i]);
        for(j=0;j<8;j++)
        {
            if((i+j)%2==0)
            {
                if(a[i][j]=='F')
                {
                    cnt++;
                }
            }
        }
    }
    printf("%d",cnt);
    return 0;
}