#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    int a, b;
    int c = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        c += a * b;
    }
    printf("%d", c);
    return 0;
}