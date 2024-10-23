#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
string map[30];
bool vis[30][30];
int ma;

void dfs(int n, int m, int cnt)
{
    vis[n][m] = true;
    if (n + 1 < N && map[n + 1][m] == '.' && !vis[n + 1][m])
        dfs(n + 1, m, cnt + 1);
    if (n - 1 >= 0 && map[n - 1][m] == '.' && !vis[n - 1][m])
        dfs(n - 1, m, cnt + 1);
    if (m + 1 < M && map[n][m + 1] == '.' && !vis[n][m + 1])
        dfs(n, m + 1, cnt + 1);
    if (m - 1 >= 0 && map[n][m - 1] == '.' && !vis[n][m - 1])
        dfs(n, m - 1, cnt + 1);
    ma = max(ma, cnt);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> N >> M;
    for (int i = 0; i < N; i++)
        cin >> map[i];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
        {
            if (map[i][j] == '.')
                dfs(i, j, 1);
            for (int i = 0; i < N; i++)
                for (int j = 0; j < M; j++)
                    vis[i][j] = false;
        }
    if (!ma)
        cout << -1;
    else
        cout << ma;
    return 0;
}