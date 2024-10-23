#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n = 1;
    int* p = (int*)malloc(sizeof(int));
    while (1)
    {
        p = (int*)realloc(p, n * sizeof(int));
        scanf("%d", &p[n - 1]);
        if (p[n - 1] == 0)
        {
            break;
        }
        n++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        p[i] = p[i] * 3;
        if (p[i] % 2 == 0)
        {
            printf("%d. even", i + 1);
            p[i] = p[i] / 2;
        }
        else
        {
            printf("%d. odd", i + 1);
            p[i] = (p[i] + 1) / 2;
        }
        p[i] = p[i] * 3;
        p[i] = p[i] / 9;
        printf(" %d\n", p[i]);
    }
    return 0;
}