#include <iostream>
#include <queue>

using namespace std;

int n, m, v;
int map[1001][1001];
bool vis[1001];
queue<int> q;

void res()
{
    for (int i = 1; i <= n; i++)
        vis[i] = 0;
}

void dfs(int v)
{
    vis[v] = true;
    cout << v << ' ';
    for (int i = 1; i <= n; i++)
        if (map[v][i] == 1 && vis[i] == 0)
            dfs(i);
}

void bfs(int v)
{
    q.push(v);
    vis[v] = true;
    cout << v << ' ';
    while (!q.empty())
    {
        v = q.front();
        q.pop();
        for (int i = 1; i <= n; i++)
            if (map[v][i] == 1 && vis[i] == 0)
            {
                q.push(i);
                vis[i] = true;
                cout << i << ' ';
            }
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m >> v;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    res();
    dfs(v);
    cout << '\n';
    res();
    bfs(v);
}