#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int m, n;
queue<pair<int, int>> q;
int cnt[1001][1001];
int v[1001][1001];

void bfs()
{
    int x, y;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        if (x + 1 < n && v[x + 1][y] == 0)
        {
            v[x + 1][y] = 1;
            cnt[x + 1][y] = cnt[x][y] + 1;
            q.push({ x + 1,y });
        }
        if (x - 1 >= 0 && v[x - 1][y] == 0)
        {
            v[x - 1][y] = 1;
            cnt[x - 1][y] = cnt[x][y] + 1;
            q.push({ x - 1,y });
        }
        if (y + 1 < m && v[x][y + 1] == 0)
        {
            v[x][y + 1] = 1;
            cnt[x][y + 1] = cnt[x][y] + 1;
            q.push({ x,y + 1 });
        }
        if (y - 1 >= 0 && v[x][y - 1] == 0)
        {
            v[x][y - 1] = 1;
            cnt[x][y - 1] = cnt[x][y] + 1;
            q.push({ x,y - 1 });
        }
    }
    return;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int ma = 0;
    bool ch = true;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 1)
                q.push({ i,j });
        }
    bfs();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 0)
            {
                ma = -1;
                ch = false;
                break;
            }
            if (ma < cnt[i][j])
                ma = cnt[i][j];
        }
        if (!ch)
            break;
    }
    cout << ma;
    return 0;
}