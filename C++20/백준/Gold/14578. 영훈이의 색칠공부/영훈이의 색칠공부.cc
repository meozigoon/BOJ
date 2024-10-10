#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <numeric>

using namespace std;

long long dp[100001];
int m = 1000000007;

long long c(long long n)
{
	if (!dp[n])
	{
		dp[n] = (n - 1) * ((c(n - 1) + c(n - 2)) % m) % m;
	}
	return dp[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long n;
	dp[2] = 1;
	dp[3] = 2;
	cin >> n;
	long long ans = 1;
	for (int i = 1; i <= n; i++)
	{
	    ans *= i;
	    ans %= m;
	}
	cout << (c(n) * ans) % m;
	return 0;
}