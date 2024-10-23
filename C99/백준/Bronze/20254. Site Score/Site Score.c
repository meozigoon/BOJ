#include<stdio.h>
 
int main()
{
    int UR,TR,UO,TO,TH;
    scanf("%d %d %d %d",&UR,&TR,&UO,&TO);
    TH=(UR*56)+(TR*24)+(UO*14)+(TO*6);
    printf("%d",TH);
    return 0;
}