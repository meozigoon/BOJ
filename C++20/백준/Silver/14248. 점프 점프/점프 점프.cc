#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int cnt;
int n;

void dfs(int s, vector<bool>& vis, vector<int>& adj)
{
	vis[s] = true;
	cnt++;
	if (s - adj[s] >= 0)
		if (!vis[s - adj[s]])
			dfs(s - adj[s], vis, adj);
	if (s + adj[s] < n)
		if (!vis[s + adj[s]])
			dfs(s + adj[s], vis, adj);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n;
	vector<int> adj(n);
	vector<bool> vis(n, false);
	for (int i = 0; i < n; i++)
		cin >> adj[i];
	int r;
	cin >> r;
	dfs(r - 1, vis, adj);
	cout << cnt;
}