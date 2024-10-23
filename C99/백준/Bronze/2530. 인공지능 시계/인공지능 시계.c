#include<stdio.h>

int main()
{
    int h,m,s,n;
    scanf("%d %d %d",&h,&m,&s);
    scanf("%d",&n);
    h+=n/(60*60);
    m+=(n%(60*60))/60;
    s+=(n%(60*60))%60;
    while(1)
    {
    if(h>23)
    {
        h-=24;
    }
    if(m>59)
    {
        h++;
        m-=60;
    }
    if(s>59)
    {
        m++;
        s-=60;
    }
    if(s<60&&m<60&&h<24)
    {
        break;
    }
    }
    printf("%d %d %d",h,m,s);
    return 0;
}