#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<string> str(n), v(m);
    for (int i = 0; i < n; i++)
        cin >> str[i];
    for (int i = 0; i <  m; i++)
        cin >> v[i];
    sort(str.begin(), str.end());
    int cnt = 0;
    for (int i = 0; i < m; i++)
        if (binary_search(str.begin(), str.end(), v[i]))
            cnt++;
    cout << cnt;
}