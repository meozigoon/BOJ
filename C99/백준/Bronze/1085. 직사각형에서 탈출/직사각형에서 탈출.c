#include<stdio.h>

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    int m=10000;
    if(x<m)
    {
        m=x;
    }
    if(y<m)
    {
        m=y;
    }
    if(w-x<m)
    {
        m=w-x;
    }
    if(h-y<m)
    {
        m=h-y;
    }
    printf("%d",m);
    return 0;
}