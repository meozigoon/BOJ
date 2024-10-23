#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <numeric>

using namespace std;

long long dp[1000001];
int m = 1000000000;

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
	int n;
	dp[2] = 1;
	dp[3] = 2;
	cin >> n;
	cout << c(n);
	return 0;
}