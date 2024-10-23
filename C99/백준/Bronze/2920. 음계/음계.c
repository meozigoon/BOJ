#include<stdio.h>

int main()
{
    int a[8];
    int cnt1=0;
    int cnt2=0;
    scanf("%d %d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7]);
    for(int i=1;i<9;i++)
    {
        if(a[i-1]==i)
        {
            cnt1++;
        }
    }
    if(a[0]==8&&a[1]==7&&a[2]==6&&a[3]==5&&a[4]==4&&a[5]==3&&a[6]==2&&a[7]==1)
    {
        cnt2=8;
    }
    if(cnt1==8)
    {
        printf("ascending");
    }
    else if(cnt2==8)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }
    return 0;
}