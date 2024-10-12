#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, tmp, mean = 0, mode = 0, min, max = 0;
    bool is = false;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(8001, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mean += v[i];
        tmp = (v[i] <= 0) ? abs(v[i]) : v[i] + 4000;
        v2[tmp]++;
        if (v2[tmp] > max)
        {
            max = v2[tmp];
        }
    }
    sort(v.begin(), v.end());
    for (int i = -4000; i < 4001; i++)
    {
        if (i <= 0)
        {
            tmp = abs(i);
        }
        else
        {
            tmp = i + 4000;
        }
        if (v2[tmp] == max)
        {
            mode = i;
            if (is)
            {
                break;
            }
            is = true;
        }
    }
    if (round(mean / (double)n) == -0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << round(mean / (double)n) << endl;
    }
    cout << v[round(n / 2)] << endl;
    cout << mode << endl;
    min = v[0];
    max = v[v.size() - 1];
    cout << max - min << endl;
}