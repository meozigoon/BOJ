#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    char* a=(char*)malloc(n*sizeof(char));
    scanf("%s",a);
    printf("%c%c%c%c%c",a[n-5],a[n-4],a[n-3],a[n-2],a[n-1]);
    return 0;
}