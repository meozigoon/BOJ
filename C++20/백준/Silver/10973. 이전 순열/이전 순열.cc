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
    vector<int> v(n);
    bool ch = true;
    vector<int> cmp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cmp[i] = i + 1;
    }
    prev_permutation(v.begin(), v.end());
    for (int i = 0; i < n; i++)
        if (v[i] != cmp[n - 1 - i])
            ch = false;
    if (ch)
        cout << -1;
    else
        for (int i : v)
            cout << i << ' ';
}