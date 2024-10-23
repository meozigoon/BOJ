#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int map[100][100];

void dfs(int a, int b, int k, vector<vector<bool>>& vis)
{
    vis[a][b] = true;
    if (a + 1 < n && map[a + 1][b] > k && !vis[a + 1][b])
        dfs(a + 1, b, k, vis);
    if (a - 1 >= 0 && map[a - 1][b] > k && !vis[a - 1][b])
        dfs(a - 1, b, k, vis);
    if (b + 1 < n && map[a][b + 1] > k && !vis[a][b + 1])
        dfs(a, b + 1, k, vis);
    if (b - 1 >= 0 && map[a][b - 1] > k && !vis[a][b - 1])
        dfs(a, b - 1, k, vis);
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int mi = 100, ma = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
            mi = min(mi, map[i][j]);
            ma = max(ma, map[i][j]);
        }
    int cnt, m = 1;
    for (int k = mi; k < ma; k++)
    {
        cnt = 0;
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                if (!vis[i][j] && map[i][j] > k)
                {
                    dfs(i, j, k, vis);
                    cnt++;
                }
            }
        m = max(m, cnt);
    }
    cout << m;
}