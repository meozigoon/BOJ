#include <stdio.h>

int main(void)
{
	int a, b;
	int x, y;
    int i;
	scanf("%d %d", &a, &b);
	for (i = 1; i <= a && i <= b; i++)
    {
		if (a % i == 0 && b % i == 0)
			x = i;
	}
	printf("%d\n", x);
	printf("%d", a * b / x);
    return 0;
}