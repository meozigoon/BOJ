#include<stdio.h>

int main()
{
    int a, b, c, tmp;
    scanf("%d %d %d", &a, &b, &c);
    while (1)
    {
        if (b < a)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (c < b)
        {
            tmp = b;
            b = c;
            c = tmp;
        }
        if (c < a)
        {
            tmp = a;
            a = c;
            c = tmp;
        }
        if(a<b&&b<c)
        {
            break;
        }
    }
    printf("%d %d %d", a, b, c);
    return 0;
}