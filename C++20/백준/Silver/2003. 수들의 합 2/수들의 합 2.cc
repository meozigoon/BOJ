#include <iostream>

using namespace std;

int board[10001];

int main(void)
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> board[i];
    int ans = 0;
    int start = 0;
    int end = 0;
    int sum = 0;
    while (end <= n)
    {
        if (sum >= m)
            sum -= board[start++];
        else if (sum < m)
            sum += board[end++];
        if (sum == m)
            ans++;
    }
    cout << ans << '\n';
}