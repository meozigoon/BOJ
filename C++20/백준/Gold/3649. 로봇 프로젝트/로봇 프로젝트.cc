#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int x, n;
    bool ch;
    while (cin >> x)
    {
        ch = false;
        cin >> n;
        vector<int> l(n);
        x *= 10000000;
        for (int i = 0; i < n; i++)
            cin >> l[i];
        sort(l.begin(), l.end());
        int s = 0, e = n - 1;
        while (s < e && e < n)
        {
            if (l[s] + l[e] == x)
            {
                cout << "yes " << l[s] << ' ' << l[e] << '\n';
                ch = true;
                break;
            }
            else if (l[s] + l[e] > x)
                e--;
            else
                s++;
        }
        if (!ch)
            cout << "danger\n";
    }
}