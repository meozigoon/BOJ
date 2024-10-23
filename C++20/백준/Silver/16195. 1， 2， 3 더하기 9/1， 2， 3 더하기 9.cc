#include <iostream>

using namespace std;

long dp[1001][1001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, t, m;
    cin >> t;
    dp[1][1] = 1;
    dp[2][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1;
    dp[3][2] = 2;
    dp[3][3] = 1;
    for (int i = 4; i <= 1000; i++)
    {
        for (int j = 2; j < i; j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 2][j - 1] + dp[i - 3][j - 1]) % 1000000009;
        dp[i][i] = 1;
    }
    long ans;
    while (t--)
    {
        cin >> n >> m;
        ans = 0;
        for (int i = 1; i <= m; i++)
            ans += dp[n][i];
        cout << ans % 1000000009 << '\n';
    }
    return 0;
}