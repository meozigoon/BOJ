#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[9];
bool vis[9];
int v[9];

void dfs(int num, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = num; i <= n; i++)
    {
        vis[i] = true;
        arr[cnt] = v[i];
        dfs(i, cnt + 1);
        vis[i] = false;
    }
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    sort(v, v + n + 1);
    dfs(1, 0);
}