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
    vector<int> l(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int k = 0; k < n; k++)
    {
        l[k] = 1;
        for (int i = 0; i < k; i++)
            if (a[i] > a[k])
                l[k] = max(l[k], l[i] + 1);
    }
    sort(l.rbegin(), l.rend());
    cout << l[0];
}