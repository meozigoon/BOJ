#include <iostream>

using namespace std;

int n, m;
int arr[9];
bool vis[9];

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
        if (!vis[i])
        {
            vis[i] = true;
            arr[cnt] = i;
            dfs(i + 1, cnt + 1);
            vis[i] = false;
        }
    }
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    dfs(1, 0);
}