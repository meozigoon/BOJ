#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

vector<int> adj[100000];
bool vis[100000];
int cnt;
queue<int> q;

void bfs(int s, vector<int>& ord)
{
	vis[s] = true;
	ord[s] = ++cnt;
	q.push(s);
	int u;
	while(!q.empty())
	{
		u = q.front();
		q.pop();
		sort(adj[u].begin(), adj[u].end());
		for (int i : adj[u])
		{
			if (!vis[i])
			{
				vis[i] = true;
				q.push(i);
				ord[i] = ++cnt;
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m, r;
	cin >> n >> m >> r;
	int a, b;
	vector<int> ord(n, 0);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		adj[a - 1].push_back(b - 1);
		adj[b - 1].push_back(a - 1);
	}
	bfs(r - 1, ord);
	for (int i = 0; i < n; i++)
		cout << ord[i] << '\n';
}