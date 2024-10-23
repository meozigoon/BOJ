#include <stdio.h>

int main(void)
{
    int n;
    char str[3][10]={"Vaporeon", "Jolteon", "Flareon"};
    scanf("%d", &n);
    printf("%s", str[++n%3]);
    return 0;
}