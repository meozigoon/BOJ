#include <iostream>
#include <vector>

using namespace std;

void dfs(int s, vector<vector<int>>& map, vector<bool>& vis)
{
	vis[s] = true;
	for (int i : map[s])
	{
		if (!vis[i])
			dfs(i, map, vis);
	}
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<vector<int>> map(n);
	vector<bool> vis(n, false);
	int a, b;
	while (m--)
	{
		cin >> a >> b;
		map[a - 1].push_back(b - 1);
		map[b - 1].push_back(a - 1);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (!vis[i])
		{
			cnt++;
			dfs(i, map, vis);
		}
	}
	cout << cnt;
}