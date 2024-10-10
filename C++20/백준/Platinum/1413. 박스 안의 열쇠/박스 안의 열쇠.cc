#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <numeric>

using namespace std;

long long dp[21][21];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long n, m;
	cin >> n >> m;
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            dp[i][j] = (i - 1) * dp[i - 1][j] + dp[i - 1][j - 1];
    long long fac = 0, ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        fac += dp[n][i];
        if (i <= m)
            ans += dp[n][i];
    }
    long long g = gcd(fac, ans);
    cout << ans / g << '/' << fac / g;
	return 0;
}