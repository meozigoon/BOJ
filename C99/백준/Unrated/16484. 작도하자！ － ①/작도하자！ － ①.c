#include<stdio.h>
#include<math.h>

int main()
{
    int a, b;
    float c;
    scanf("%d %d", &a, &b);
    c = a;

    printf("%.1f", (c / 2) - b);
    return 0;
}