#include<stdio.h>

int main()
{
    int a=9 * 1 + 7 * 3 + 8 * 1 + 0 * 3 + 9 * 1 + 2 * 3 + 1 * 1 + 4 * 3 + 1 * 1 + 8 * 3 ;
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    printf("The 1-3-sum is %d",x+y*3+z+a);
    return 0;
}