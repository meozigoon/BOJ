#include <stdio.h>

int main()
{
    long long vk,jk,va,ja,vh,dh,jh,lck, lca, hc;
    scanf("%lld %lld %lld %lld %lld %lld %lld",&vk,&jk,&va,&ja,&vh,&dh,&jh);
    lck=vk*jk;
    lca=va*ja;
    hc=vh*dh*jh;
    printf("%lld",hc*(lca+lck));
    return 0;
}