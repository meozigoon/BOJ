#include <iostream>
#include <vector>

using namespace std;

vector<int> adj[100000];
bool vis[100000];
int n, m, s;

int dfs(int a)
{
    int r = 0;
    vis[a] = true;
    for (int i : adj[a])
        if (!vis[i])
            r += dfs(i) + 1;
    return r;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    int a, b;
    while (m--)
    {
        cin >> a >> b;
        adj[b - 1].push_back(a - 1);
    }
    cin >> s;
    cout << dfs(s - 1);
}