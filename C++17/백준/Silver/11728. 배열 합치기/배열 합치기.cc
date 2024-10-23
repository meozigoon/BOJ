#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int>a(n);
    vector<int>b(m);
    vector<int>sum(n+m);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];
    for(int i = 0; i < n; i++)
        sum[i] = a[i];
    for(int i = n; i < n + m; i++)
        sum[i] = b[i - n];
    sort(sum.begin(), sum.end());
    for(int i = 0; i < n + m; i++)
        cout << sum[i] << ' ';
    return 0;
}