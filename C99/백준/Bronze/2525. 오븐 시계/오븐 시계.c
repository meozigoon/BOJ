#include<stdio.h>

int main()
{
    int h,m,mm;
    scanf("%d %d",&h,&m);
    scanf("%d",&mm);
    m+=mm;
    while(1)
    {
     if(m>=60)
    {
        m-=60;
        h++;
    }
    if(h>=24)
    {
        h-=24;
    }   
    if(m<60&&h<24)
    {
    break;
    }
    }
    printf("%d %d",h,m);
    return 0;
}