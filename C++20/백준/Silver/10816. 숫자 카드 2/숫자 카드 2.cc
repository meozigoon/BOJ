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
    vector<int> fir(n);
    for (int i = 0; i < n; i++)
        cin >> fir[i];
    sort(fir.begin(), fir.end());
    int m;
    cin >> m;
    vector<int> sec(m);
    for (int i = 0; i < m; i++)
        cin >> sec[i];
    int low, up;
    for (int i = 0; i < m; i++)
    {
        low = lower_bound(fir.begin(), fir.end(), sec[i]) - fir.begin();
        up = upper_bound(fir.begin(), fir.end(), sec[i]) - fir.begin();
        cout << up - low << ' ';
    }
}