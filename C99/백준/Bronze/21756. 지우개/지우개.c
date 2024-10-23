#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int i;
    int j;
    scanf("%d", &n);
    int* p = (int*)malloc(n * sizeof(int));
    int* q = (int*)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        p[i] = i + 1;
    while (n > 1)
    {
        j = 0;
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                q[j] = p[i];
                j++;
            }
        }
        for (i = 0; i < j; i++)
        {
            p[i] = q[i];
        }
        n = j;
    }
    printf("%d", p[0]);
    return 0;
}