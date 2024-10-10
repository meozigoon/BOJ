#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <numeric>

using namespace std;

long long dp[100001];

long long c(long long n)
{
	if (!dp[n])
	{
		dp[n] = (n - 1) * (c(n - 1) + c(n - 2));
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
	int t;
	cin >> t;
	while (t--)
	{
	    cin >> n;
	    cout << c(n) << '\n';
	}
	return 0;
}