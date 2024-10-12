#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int i;
    int a;
    int b;
    scanf("%d",&n);
    int*p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        p[i]=a+b;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",p[i]);
    }
    free(p);
    return 0;
}