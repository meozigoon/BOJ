#include <iostream>

using namespace std;

int f(int n)
{
	int cnt = 0;
	int hun, ten, one;
	if (n < 100)
		return n;
	else
	{
		cnt = 99;
		for (int i = 100; i <= n; i++)
		{
			hun = i / 100;
			ten = (i / 10) % 10;
			one = i % 10;
			if ((hun - ten) == (ten - one))
				cnt++;
		}
	}
	return cnt;
}

int main()
{
	int n;
	cin >> n;
	int ans = f(n);
	cout << ans;
	return 0;
}