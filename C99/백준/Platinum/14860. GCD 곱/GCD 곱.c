#include <stdio.h>
#include <stdbool.h>
#define D 1000000007

bool composite[15000001];

long long mod(long long x, long long y);

int main() {
	long long count = 0;
	long long N, M;
	scanf("%lld %lld", &N, &M);
	long long min = (M > N) ? N : M;
	for (int i = 2; i <= min; i *= 2) {
		count += ((N / i) * (M / i));
	}
	long long answer = mod(2, count);

	for (long long i = 3; i <= min; i += 2) {
		if (!composite[i]) {
			count = 0;
			for (long long j = i; j <= min; j *= i) {
				count += ((N / j) * (M / j));
			}
			answer = (answer * mod(i, count)) % D;

			for (long long j = 3 * i; j <= min; j += 2 * i) {
				if (!composite[j]) {
					composite[j] = true;
				}
			}
		}
	}

	printf("%lld", answer % D);
	return 0;
}

long long mod(long long x, long long y) {
	x %= D;
	long long result = 1;
	while (y) {
		if (y % 2) {
			result = (result * x) % D;
		}
		x = (x * x) % D;
		y /= 2;
	}
	return result;
}