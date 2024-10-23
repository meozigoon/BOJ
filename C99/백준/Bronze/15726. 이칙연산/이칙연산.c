#include<stdio.h>

int main()
{
   double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a * b / c > a / b * c)
        printf("%d", (int)(a * b / c));
    else
        printf("%d", (int)(a / b * c));
    return 0;
}