#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[8];
bool vis[8];
int v[8];

void dfs(int num, int cnt)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
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
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v, v + n);
    dfs(1, 0);
}