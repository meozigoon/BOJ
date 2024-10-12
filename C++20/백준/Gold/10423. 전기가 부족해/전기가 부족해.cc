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
	long long v, e, k;
	cin >> v >> e >> k;
	vector<tuple<long long, long long, long long>> g;
	long long a, b, w;
	long long cnt = k;
	for (long long i = 0; i < v + 1; i++)
		link.push_back(i);
	while (k--)
	{
		cin >> a;
		unite(a - 1, v);
	}
	for (long long i = 0; i < e; i++)
	{
		cin >> a >> b >> w;
		g.push_back({ w,a - 1,b - 1 });
	}
	sort(g.begin(), g.end());
	long long ans = 0;
	for (auto& i : g)
	{	
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			ans += w;
			cnt++;
			if (cnt == v)
				break;
		}
	}
	cout << ans;
	return 0;
}