#include<stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int res[1001];
	res[1] = 1;
	res[2] = 2;
	res[3] = 1;
	res[4] = 1;
	res[5] = 1;
	int i;
	for (i = 6; i <= n; i++)
	{
		if (res[i - 1] == 2 || res[i - 3] == 2 || res[i - 4] == 2)
			res[i] = 1;
		else
			res[i] = 2;
	}
	printf(res[n] == 1 ? "SK" : "CY");
}