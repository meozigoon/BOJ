#include <iostream>

using namespace std;

unsigned long long dp[10001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    dp[0] = 1;
    dp[1] = 1;
    int p, q;
    for (int i = 1; i <= t; i++)
    {
        cin >> p >> q;
        if ((p == 1 || p == 2) && q == 1)
        {
            cout << "Case #" << i << ": 0\n";
            continue;
        }
        for (int j = 2; j <= p; j++)
            dp[j] = (dp[j - 1] + dp[j - 2]) % q;
        cout << "Case #" << i << ": " << dp[p - 1] << '\n';
    }
}