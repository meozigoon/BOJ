#include <iostream>

using namespace std;

unsigned long long num[36];

unsigned long long t(unsigned long long n)
{
	if (num[n] == 0)
	{
		for (int i = 0; i < n; i++)
		{
			num[n] += t(i) * t(n - 1 - i);
		}
	}
	return num[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	num[0] = 1;
	int n;
	cin >> n;
	cout << t(n);
}