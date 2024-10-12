#include<stdio.h>

int n[46];

int fibo(int x)
{
    n[0] = 0;
    n[1] = 1;
    int a;
    for (a = 2; a <= x; a++)
    {
        n[a] = n[a - 1] + n[a - 2];
    }
    return n[x];
}

int main(void)
{
    int k;
    scanf("%d", &k);
    printf("%d", fibo(k));
    return 0;
}