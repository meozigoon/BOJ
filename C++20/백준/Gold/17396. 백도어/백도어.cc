#include <iostream>
#include <vector>
#include <queue>
#define INF 9223372036854775807

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long v, e, s;
	cin >> v >> e;
	s = 1;
	priority_queue<pair<long long, long long>> q;
	vector<vector<pair<long long, long long>>> ad(v);
	vector<long long> dis(v, INF);
	vector<bool> vis(v, false);
	vector<long long> vi(v);
	long long a, b, w;
	for (long long i = 0; i < v; i++)
		cin >> vi[i];
	for (long long i = 0; i < e; i++)
	{
		cin >> a >> b >> w;
		if ((vi[a] && a != v - 1) || (vi[b] && b != v - 1))
			continue;
		ad[a].push_back({ b,w });
		ad[b].push_back({ a,w });
	}
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
	if (dis[v - 1] == INF)
		cout << -1;
	else
		cout << dis[v - 1];
	return 0;
}