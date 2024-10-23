#include <iostream>
#include <vector>
#include <queue>
#define INF 2147483647

using namespace std;

vector<vector<pair<long long, long long>>> ad;
long long v, e;

long long d(long long s, long long l)
{
	priority_queue<pair<long long, long long>> q;
	vector<long long> dis(v, INF);
	vector<bool> vis(v, false);
	dis[s - 1] = 0;
	q.push({ 0,s - 1 });
	long long a, b, w;
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
	return dis[l - 1];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> v >> e;
	long long a, b, w;
	ad.assign(v, vector<pair<long long, long long>>());
	for (int i = 0; i < e; i++)
	{
		cin >> a >> b >> w;
		ad[a - 1].push_back({ b - 1,w });
		ad[b - 1].push_back({ a - 1,w });
	}
	long long x, y;
	cin >> x >> y;
	long long vx = d(1, x);
	long long vy = d(1, y);
	long long xn = d(x, v);
	long long yn = d(y, v);
	long long xy = d(x, y);
	long long ma = min((long long)vx + xy + yn, (long long)vy + xy + xn);
	if (ma >= INF)
		cout << -1;
	else
		cout << ma;
	return 0;
}