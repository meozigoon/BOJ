#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> adj[100000];
bool vis[100000];

void dfs(int s, vector<int>& ord, int cnt)
{
	vis[s] = true;
	ord[s] = cnt;
	sort(adj[s].begin(), adj[s].end());
	for (int i : adj[s])
		if (!vis[i])
			dfs(i, ord, cnt + 1);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m, r;
	cin >> n >> m >> r;
	int a, b;
	vector<int> ord(n, -1);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		adj[a - 1].push_back(b - 1);
		adj[b - 1].push_back(a - 1);
	}
	dfs(r - 1, ord, 0);
	for (int i = 0; i < n; i++)
		cout << ord[i] << '\n';
}