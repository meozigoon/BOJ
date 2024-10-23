#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int a[100000];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int s = 0, e = 0;
    int ans = a[n - 1] - a[0] + 1;
    while (s < n && e < n)
    {
        if (a[e] - a[s] == m)
        {
            ans = m;
            break;
        }
        else if (a[e] - a[s] < m)
            e++;
        else
        {
            ans = min(ans, a[e] - a[s]);
            s++;
        }
    }
    cout << ans;
}