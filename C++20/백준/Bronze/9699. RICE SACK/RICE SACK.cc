#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t, ans;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ans = 0;
        for (int i = 0, x; i < 5; i++)
        {
            cin >> x;
            ans = max(ans, x);
        }
        cout << "Case #" << i << ": " << ans << '\n';
    }
    return 0;
}