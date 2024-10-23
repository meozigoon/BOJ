#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int d, h, m;
    cin >> d >> h >> m;
    int ans = m + h * 60 + d * 60 * 24 - 11 - 11 * 60 - 11 * 60 * 24;
    if (ans < 0)
        cout << -1;
    else
        cout << ans << '\n';
    return 0;
}