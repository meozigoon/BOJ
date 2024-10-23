#include <iostream>
#include <vector>
#include <queue>
#define INF 2147483647

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int v, e, s;
	cin >> v >> e;
	priority_queue<pair<int, int>> q;
	vector<vector<pair<int, int>>> ad(v);
	vector<int> dis(v, INF);
	vector<bool> vis(v, false);
	int a, b, w;
	for (int i = 0; i < e; i++)
	{
		cin >> a >> b >> w;
		ad[a - 1].push_back({ b - 1,w });
	}
	cin >> s >> e;
	dis[s - 1] = 0;
	q.push({ 0,s - 1 });
	while (!q.empty())
	{
		a = q.top().second;
		q.pop();
		if (vis[a])
			continue;
		vis[a] = true;
		for (auto i : ad[a])
		{
			b = i.first;
			w = i.second;
			if (dis[a] + w < dis[b])
			{
				dis[b] = dis[a] + w;
				q.push({ -dis[b],b });
			}
		}
	}
	cout << dis[e - 1];
	return 0;
}