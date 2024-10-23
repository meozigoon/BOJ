#include <iostream>

using namespace std;

int gcd(int n, int m)
{
	if (m > n)
		swap(n, m);
	if (m == 0)
		return n;
	return gcd(m, n % m);
}

int main(void)
{
	int a, b;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		cout << (a * b) / gcd(a, b) << endl;
	}
}