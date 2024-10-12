#include <stdio.h>

int main() {
	int a, b, c;
	int i;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	int abc = a * b * c;

	int arr[10] = { 0, };

	while (abc > 0)
	{
		++arr[abc % 10];
		abc /= 10;
	}

	for (i = 0; i < 10; ++i)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}