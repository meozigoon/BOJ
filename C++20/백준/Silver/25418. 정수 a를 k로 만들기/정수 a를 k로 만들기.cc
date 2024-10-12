#include <iostream>
#include <algorithm>

using namespace std;

int dp[1000010];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int a, k;
    cin >> a >> k;
    for (int i = a + 1; i <= k; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0 && i / 2 >= a)
            dp[i] = min(dp[i], dp[i / 2] + 1);
    }
    cout << dp[k];
}