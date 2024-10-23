#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    unsigned long long cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            cnt += upper_bound(a.begin() + (j + 1), a.end(), (a[i] + a[j]) * -1) - lower_bound(a.begin() + (j + 1), a.end(), (a[i] + a[j]) * -1);
    cout << cnt;
}