#include <iostream>
#include <vector>
#include <queue>
#define INF 2147483647

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	int v, e, s;
	int a, b, w;
	int ma, cnt;
	priority_queue<pair<int, int>> q;
	while(t--)
	{
		cin >> v >> e >> s;
		vector<vector<pair<int, int>>> ad(v);
		vector<int> dis(v, INF);
		vector<bool> vis(v, false);
		for (int i = 0; i < e; i++)
		{
			cin >> a >> b >> w;
			ad[b - 1].push_back({ a - 1,w });
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
			for (auto& i : ad[a])
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
		ma = 0;
		cnt = 0;
		for (auto& i : dis)
		{
			if (i < INF)
			{
				cnt++;
				if (ma < i)
					ma = i;
			}
		}
		cout << cnt << ' ' << ma << '\n';
	}
	return 0;
}