#include<iostream>

using namespace std;

int main(void)
{
    int n, k;
    long long c[1001][1001];
	cin >> n >> k;
	c[0][0] = 1;
	c[1][0] = 1;
	c[1][1] = 1;
	for (int i = 2; i <= n; i++)
		for (int j = 0; j <= i; j++)
		{
			if (j == i || j == 0)
                c[i][j] = 1;
			else
                c[i][j] = (c[i - 1][j - 1] + c[i - 1][j]) % 10007;
		}
	cout << c[n][k];
}