#include <iostream>
#include <algorithm>

using namespace std;

int h[1001][3];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    int p[3];
    h[0][0] = 0;
    h[0][1] = 0;
    h[0][2] = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[0] >> p[1] >> p[2];
        h[i][0] = min(h[i - 1][1], h[i - 1][2]) + p[0];
        h[i][1] = min(h[i - 1][0], h[i - 1][2]) + p[1];
        h[i][2] = min(h[i - 1][1], h[i - 1][0]) + p[2];
    }
    cout << min(h[n][2], min(h[n][0], h[n][1]));
}