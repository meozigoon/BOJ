#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int m, n;
queue<pair<int, int>> q;

int bfs(vector<vector<int>> v)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (v[i][j] == 2)
                q.push({ i,j });
    int cnt = 0;
    int x, y;
    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        if (x + 1 < n && v[x + 1][y] == 0)
        {
            v[x + 1][y] = 2;
            q.push({ x + 1,y });
        }
        if (x - 1 >= 0 && v[x - 1][y] == 0)
        {
            v[x - 1][y] = 2;
            q.push({ x - 1,y });
        }
        if (y + 1 < m && v[x][y + 1] == 0)
        {
            v[x][y + 1] = 2;
            q.push({ x,y + 1 });
        }
        if (y - 1 >= 0 && v[x][y - 1] == 0)
        {
            v[x][y - 1] = 2;
            q.push({ x,y - 1 });
        }
    }
    for (int r = 0; r < n; r++)
        for (int s = 0; s < m; s++)
            if (v[r][s] == 0)
                cnt++;
    return cnt;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> v[i][j];
    int ma = 0, a = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (v[i][j] == 0)
            {
                v[i][j] = 1;
                for (int k = 0; k < n; k++)
                    for (int l = 0; l < m; l++)
                        if (v[k][l] == 0)
                        {
                            v[k][l] = 1;
                            for (int o = 0; o < n; o++)
                                for (int p = 0; p < m; p++)
                                    if (v[o][p] == 0)
                                    {
                                        v[o][p] = 1;
                                        a = bfs(v);
                                        if (ma < a)
                                            ma = a;
                                        v[o][p] = 0;
                                    }
                            v[k][l] = 0;
                        }
                v[i][j] = 0;
            }
    cout << ma;
    return 0;
}