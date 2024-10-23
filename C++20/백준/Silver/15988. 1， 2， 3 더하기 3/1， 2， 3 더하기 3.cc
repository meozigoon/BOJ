#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

unsigned long long num[1000001];

unsigned long long p(unsigned long long n)
{
	if (num[n] == 0)
		num[n] = p(n - 1) + p(n - 2) + p(n - 3);
	num[n] %= 1000000009;
	return num[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	num[1] = 1;
	num[2] = 2;
	num[3] = 4;
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << p(n) << '\n';
	}
}