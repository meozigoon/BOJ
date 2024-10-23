#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	unsigned long long res = 2;
	if (n == 1)
		cout << 0;
	else
	{
		for (int i = 0; i < n - 2; i++)
		{
			res *= 3;
			res %= 1000000009;
		}
		cout << res;
	}
}