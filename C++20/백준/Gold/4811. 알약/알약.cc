#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <numeric>

using namespace std;

long long dp[10001];

long long c(long long n)
{
	if (!dp[n])
	{
		for (int i = 0; i < n; i++)
		{
			dp[n] += c(i) * c(n - i - 1);
		}
	}
	return dp[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long n;
	dp[0] = dp[1] = 1;
	while (1)
	{
		cin >> n;
		if (!n)
			break;
		cout << c(n) << '\n';
	}
	return 0;
}