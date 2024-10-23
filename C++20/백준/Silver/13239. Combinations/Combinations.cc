#include <iostream>

using namespace std;

unsigned long long c[1001][1001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, k;
	c[0][0] = 1;
	c[1][0] = 1;
	c[1][1] = 1;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for (int i = 2; i <= n; i++)
			for (int j = 0; j <= i; j++)
			{
				if (j == i || j == 0)
					c[i][j] = 1;
				else
					c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % 1000000007;
			}
		cout << c[n][k] << '\n';
	}
}