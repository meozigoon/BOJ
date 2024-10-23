#include <iostream>
#include <vector>

using namespace std;

int n, m, cnt;

void dfs(int a, int b, vector<vector<char>>& adj, vector<vector<bool>>& vis)
{
	vis[a][b] = true;
	if (b + 1 < m)
		if (adj[a][b + 1] != 'X' && !vis[a][b + 1])
		{
			if (adj[a][b + 1] == 'P')
				cnt++;
			dfs(a, b + 1, adj, vis);
		}
	if (a + 1 < n)
		if (adj[a + 1][b] != 'X' && !vis[a + 1][b])
		{
			if (adj[a + 1][b] == 'P')
				cnt++;
			dfs(a + 1, b, adj, vis);
		}
	if (b - 1 >= 0)
		if (adj[a][b - 1] != 'X' && !vis[a][b - 1])
		{
			if (adj[a][b - 1] == 'P')
				cnt++;
			dfs(a, b - 1, adj, vis);
		}
	if (a - 1 >= 0)
		if (adj[a - 1][b] != 'X' && !vis[a - 1][b])
		{
			if (adj[a - 1][b] == 'P')
				cnt++;
			dfs(a - 1, b, adj, vis);
		}
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n >> m;
	vector<vector<char>> adj(n, vector<char>(m));
	vector<vector<bool>> vis(n, vector<bool>(m, false));
	int ix, iy;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> adj[i][j];
			if (adj[i][j] == 'I')
				ix = i, iy = j;
		}
	dfs(ix, iy, adj, vis);
	if (cnt == 0)
		cout << "TT";
	else
		cout << cnt;
}