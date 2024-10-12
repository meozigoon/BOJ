#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int* a = (int*)malloc(n * sizeof(int));
    int* b = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
        {
            puts("MMM BRAINS");
        }
        else if (a[i] < b[i])
        {
            puts("NO BRAINS");
        }
    }
    return 0;
}