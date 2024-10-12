#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= c)
	{
		printf("-1");
	}
    else
    {
        printf("%d",a / (c - b) + 1);
    }
	return 0;
}