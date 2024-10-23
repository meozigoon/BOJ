#include <iostream>

using namespace std;

unsigned long long num[117];

unsigned long long f(unsigned long long n)
{
	if (num[n] == 0)
		num[n] = f(n - 1) + f(n - 3);
	return num[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	num[1] = 1;
	num[2] = 1;
	num[3] = 1;
	int n;
	cin >> n;
	cout << f(n);
}