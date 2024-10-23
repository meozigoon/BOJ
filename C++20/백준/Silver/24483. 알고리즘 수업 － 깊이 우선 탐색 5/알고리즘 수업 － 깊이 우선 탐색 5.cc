#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<unsigned long long> adj[100000];
bool vis[100000];
unsigned long long cnt;
unsigned long long sum;

void dfs(int s, int d)
{
	vis[s] = true;
	cnt++;
	sum += cnt * d;
	sort(adj[s].begin(), adj[s].end());
	for (int i : adj[s])
		if (!vis[i])
			dfs(i, d + 1);
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	unsigned long long n, m, r;
	cin >> n >> m >> r;
	unsigned long long a, b;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		adj[a - 1].push_back(b - 1);
		adj[b - 1].push_back(a - 1);
	}
	dfs(r - 1, 0);
	cout << sum;
}