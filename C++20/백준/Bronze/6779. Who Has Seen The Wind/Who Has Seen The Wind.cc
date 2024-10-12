#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int f(int h, int m)
{
    for (int i = 1; i <= m; i++)
        if (-6 * i * i * i * i + h * i * i * i + 2 * i * i + i <= 0)
            return i;
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int h, m, ans;
    cin >> h >> m;
    ans = f(h, m);
    if (!ans)
        cout << "The balloon does not touch ground in the given time.";
    else
        cout << "The balloon first touches ground at hour: " << ans;
    return 0;
}