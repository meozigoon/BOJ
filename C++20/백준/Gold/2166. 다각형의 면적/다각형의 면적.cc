#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct p
{
    double x;
    double y;
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<p> v(n);
    double ans = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i].x >> v[i].y;
    for (int i = 0; i < n; i++)
    {
        if (i != n - 1)
            ans += v[i].x * v[i + 1].y - v[i + 1].x * v[i].y;
        else
            ans += v[i].x * v[0].y - v[0].x * v[i].y;
    }
    cout << fixed;
    cout.precision(1);
    cout << abs(ans) / 2;
    return 0;
}