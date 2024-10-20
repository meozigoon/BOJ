#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<vector<int>> sum(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum[i][i] = a[i];
    }
    for (int i = 1; i < n; i++)
        for (int j = 0; j < i; j++)
            sum[j][i] = sum[j][i - 1] + a[i];
    vector<vector<int>> dp(n, vector<int>(m + 1));
    for (int i = 0; i < n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] = -2e9;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            dp[i][1] = max(dp[i][1], sum[j][i]);
    for (int k = 2; k <= m; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < i; j++)
                for (int r = j + 1; r <= i; r++)
                    dp[i][k] = max(dp[i][k], dp[j][k - 1] + sum[r][i]);
    int ans = -2e9;
    for (int i = 0; i < n; i++)
        ans = max(ans, dp[i][m]);
    cout << ans;
    return 0;
}