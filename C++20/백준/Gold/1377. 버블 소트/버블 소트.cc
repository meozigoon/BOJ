#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    int tmp, ma = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v[i].first = tmp;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        ma = max(ma, v[i].second - i);
    cout << ma + 1;
    return 0;
}