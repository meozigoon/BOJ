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
    vector<int> sum(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int k = 0; k < n; k++)
    {
        sum[k] = a[k];
        for (int i = 0; i < k; i++)
            if (a[i] < a[k])
                sum[k] = max(sum[k], sum[i] + a[k]);
    }
    sort(sum.rbegin(), sum.rend());
    cout << sum[0];
}