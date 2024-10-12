#include<stdio.h>

int main()
{
    int x1, x2, y1, y2;
    int x, y, r;
    int c = 0;
    int T;
    int n;
    int a, b;
    scanf("%d", &T);
    int i, j;
    for (i = 0; i < T; i++)
    {
        c = 0;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d %d %d", &x, &y, &r);
            a = (x - x1) * (x - x1) + (y - y1) * (y - y1);
            b = (x - x2) * (x - x2) + (y - y2) * (y - y2);
            if (a < r * r && b > r* r) c++;
            if (a > r * r && b < r* r) c++;
        }
        printf("%d\n", c);
    }
    return 0;
}