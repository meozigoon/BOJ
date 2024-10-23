#include <stdio.h>

float a[1000];

int main()
{
	int num;
	int i;
	int M = 0;
	float sum = 0;
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf("%f", &a[i]);
		if (M < a[i])
		{
			M = a[i];
		}
	}
	for (i = 0; i < num; i++)
	{
		a[i] = a[i] / M * 100;
	}
	for (i = 0; i < num; i++)
	{
		sum += a[i];
	}
	printf("%f", sum / num);
	return 0;
}