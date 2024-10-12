#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, ans = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
        ans %= 10;
    }
    cout << ans;
    return 0;
}