#include <stdio.h>

int main()
{
    int score[2], info[5];
    int i;
    for(i=0;i<2;i++)
    {
        scanf("%d %d %d %d %d",&info[0],&info[1],&info[2],&info[3],&info[4]);
        score[i]=info[0]*6+info[1]*3+info[2]*2+info[3]+info[4]*2;
    }
    printf("%d %d",score[0],score[1]);
    return 0;
}