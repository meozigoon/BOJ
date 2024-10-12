#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int a = 1;
    int cnt = 0;
    while (1)
    {
        if (v[n - a] == k)
        {
            cnt++;
            break;
        }
        else if (v[n - a] < k)
        {
            cnt++;
            k -= v[n - a];
            if (k >= v[n - a])
                continue;
            else
                a++;
        }
        else
            a++;
    }
    cout << cnt;
}