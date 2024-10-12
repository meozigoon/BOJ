#include<stdio.h>

int main()
{
    int x1, x2, y1, y2, r1, r2;
    int num;
    int d,s,f;
    int r;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
        s = r1 < r2 ? r2 - r1 : r1 - r2;
        s *= s;
        f = r1 + r2;
        f *= f;
        d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        if (d == 0 && r1 == r2)
        {
            r = -1;
        }
        else if (d < f && s < d) r = 2;
        else if (d == f || d == s) r = 1;
        else r = 0;

        printf("%d\n", r);
    }
    return 0;
}