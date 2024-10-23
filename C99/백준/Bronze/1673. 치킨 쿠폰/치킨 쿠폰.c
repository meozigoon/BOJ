#include<stdio.h>


int main()
{
    int a, b;
    int k = 0; // 도장 수
    int ans = 0;  // 치킨
    int nc; // 뉴치킨

    while (scanf("%d %d", &a, &b) != EOF)
    {
        k = a;
        ans = a;
        while (k >= b)
        {
            nc = k / b;
            ans += nc;
            k -= nc * b;
            k += nc;
        }
        printf("%d\n", ans);
    }
}