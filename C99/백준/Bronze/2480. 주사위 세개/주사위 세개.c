#include <stdio.h>

int main()
{
	int a, b, c;
	int prize;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
	{
		prize = 10000 + (a * 1000);
	}
	if (a == b && b != c)
	{
		prize = 1000 + (a * 100);
	}
	if (a == c && c != b)\
	{
		prize = 1000 + (a * 100);
	}
	if (b == c && c != a)
	{
		prize = 1000 + (b * 100);
	}
	if (a != b && b != c && c != a)
	{
		if (a > b && a > c)
		{
			prize = 100 * a;
		}
		if (b > a && b > c)
		{
			prize = 100 * b;
		}
		if (c > a && c > b)
		{
			prize = 100 * c;
		}
	}
	printf("%d", prize);
	return 0;
}