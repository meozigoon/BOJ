#include<iostream>

using namespace std;

long long c[1010][1010];

int com(int n, int k)
{
	for (int i = 2; i <= n; i++)
		for (int j = 0; j <= i; j++)
		{
			if (j == i || j == 0)
				c[i][j] = 1;
			else
				c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % 10007;
		}
	return c[n][k];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	c[0][0] = 1;
	c[1][0] = 1;
	c[1][1] = 1;
	int n;
	cin >> n;
	cout << com(n + 9, 9);
}