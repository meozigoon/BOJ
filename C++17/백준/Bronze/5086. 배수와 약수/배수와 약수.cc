#include<stdio.h>

int main(void)
{
    int a, b;
    int c;
    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a != 0 && b != 0)
        {
            c = a / b;
            if (c * b == a && a != b)
            {
                printf("multiple\n");
                continue;
            }
            c = b / a;
            if (c * a == b && a != b)
            {
                printf("factor\n");
                continue;
            }
            printf("neither\n");
            continue;
        }
        break;
    }
    return 0;
}