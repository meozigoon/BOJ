#include <iostream>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

int m, n;

int bfs(vector<string> v)
{
    int x = 0, y = 0, w = 0;
    queue<tuple<int, int, int>> q;
    vector<vector<vector<int>>> cnt(n, vector<vector<int>>(m, vector<int>(2, 0)));
    q.push(make_tuple(0, 0, 0));
    cnt[0][0][0] = 1;
    while (!q.empty())
    {
        x = get<0>(q.front());
        y = get<1>(q.front());
        w = get<2>(q.front());
        if (x == n - 1 && y == m - 1)
            return cnt[x][y][w];
        q.pop();
        if (x + 1 < n && !cnt[x + 1][y][w] && v[x + 1][y] == '0')
        {
            q.push(make_tuple(x + 1, y, w));
            cnt[x + 1][y][w] = cnt[x][y][w] + 1;
        }
        if (x - 1 >= 0 && !cnt[x - 1][y][w] && v[x - 1][y] == '0')
        {
            q.push(make_tuple(x - 1, y, w));
            cnt[x - 1][y][w] = cnt[x][y][w] + 1;
        }
        if (y + 1 < m && !cnt[x][y + 1][w] && v[x][y + 1] == '0')
        {
            q.push(make_tuple(x, y + 1, w));
            cnt[x][y + 1][w] = cnt[x][y][w] + 1;
        }
        if (y - 1 >= 0 && !cnt[x][y - 1][w] && v[x][y - 1] == '0')
        {
            q.push(make_tuple(x, y - 1, w));
            cnt[x][y - 1][w] = cnt[x][y][w] + 1;
        }
        if (x + 1 < n && w == 0 && v[x + 1][y] == '1')
        {
            q.push(make_tuple(x + 1, y, w + 1));
            cnt[x + 1][y][w + 1] = cnt[x][y][w] + 1;
        }
        if (x - 1 >= 0 && w == 0 && v[x - 1][y] == '1')
        {
            q.push(make_tuple(x - 1, y, w + 1));
            cnt[x - 1][y][w + 1] = cnt[x][y][w] + 1;
        }
        if (y + 1 < m && w == 0 && v[x][y + 1] == '1')
        {
            q.push(make_tuple(x, y + 1, w + 1));
            cnt[x][y + 1][w + 1] = cnt[x][y][w] + 1;
        }
        if (y - 1 >= 0 && w == 0 && v[x][y - 1] == '1')
        {
            q.push(make_tuple(x, y - 1, w + 1));
            cnt[x][y - 1][w + 1] = cnt[x][y][w] + 1;
        }
    }
    return -1;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << bfs(v);
    return 0;
}