#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m, cnt = 0;
    int max_len, min_len;
    vector<string> ans;
    string st;
    cin >> n >> m;
    vector<string> v(n + m);
    for (int i = 0; i < n + m; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (int i = 0; i < n + m - 1; i++)
        if (v[i] == v[i + 1])
        {
            ans.push_back(v[i]);
            cnt++;
        }
    cout << cnt << '\n';
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << '\n';
}