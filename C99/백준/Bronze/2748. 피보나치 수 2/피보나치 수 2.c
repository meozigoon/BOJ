#include <stdio.h>

long long fi[90];

long long fibonacci(int n)
{
	if(n == 1 || n == 2)
		return 1;
	if(fi[n] != 0)
		return fi[n];
	else
		fi[n] = fibonacci(n-1) + fibonacci(n-2);
	return fi[n];
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%lld", fibonacci(n));
	return 0;
}