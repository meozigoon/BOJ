#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    vector<bool> p(100001, true);
    for (int i = 2; i <= sqrt(100001); i++)
        if (p[i] == true)
            for (int j = 2 * i; j < 100001; j += i)
                p[j] = false;
    int n, tmp;
    while (t--)
    {
        cin >> n;
        vector<int> cnt(n + 1, 0);
        for (int i = 2; i <= n; i++)
            if (p[i] == true && n % i == 0)
            {
                tmp = n;
                while (1)
                {
                    cnt[i]++;
                    tmp /= i;
                    if (tmp % i != 0)
                        break;
                }
            }
                
        for (int i = 2; i <= n; i++)
            if (cnt[i] != 0)
                cout << i << ' ' << cnt[i] << '\n';
    }
}