#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

vector<long long> link;

long long find(long long x)
{
	if (x != link[x])
		link[x] = find(link[x]);
	return link[x];
}

bool same(long long a, long long b)
{
	return (find(a) == find(b));
}

void unite(long long a, long long b)
{
	a = find(a);
	b = find(b);
	if (a < b)
		swap(a, b);
	link[b] = a;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long v, e, t;
	cin >> v >> e >> t;
	vector<tuple<long long, long long, long long>> g;
	long long a, b, w;
	for (long long i = 0; i < e; i++)
	{
		cin >> a >> b >> w;
		g.push_back({ w,b - 1,a - 1 });
		g.push_back({ w,a - 1,b - 1 });
	}
	sort(g.begin(), g.end());
	for (long long i = 0; i < v; i++)
		link.push_back(i);
	long long ans = 0;
	long long cnt = 0;
	for (long long i = 0; i < e * 2; i++)
	{
		tie(w, a, b) = g[i];
		if (!same(a, b))
		{
			unite(a, b);
			ans += w;
			ans += t * cnt;
			cnt++;
		}
	}
	cout << ans;
	return 0;
}