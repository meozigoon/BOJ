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
    vector<bool> p(n + 1, false);
    p[0] = p[1] = true;
	vector<int> v;
    for (int i = 2; i <= n; i++)
        if (!p[i])
        {
            v.push_back(i);
            for (int j = i * 2; j <= n; j += i)
                p[j] = true;
        }
    int cnt = 0;
    int sum = 0;
    int s = 0, e = 0;
    while (1)
    {
        if (sum > n)
        {
            sum -= v[s];
            s++;
        }
        else if (sum < n)
        {
            if (e >= v.size())
                break;
            sum += v[e];
            e++;
        }
        else
        {
            cnt++;
            if (e >= v.size())
                break;
            sum += v[e];
            e++;
        }
    }
    cout << cnt;
}