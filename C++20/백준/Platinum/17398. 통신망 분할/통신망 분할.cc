#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <map>

using namespace std;

vector<unsigned long long> link;
vector<unsigned long long> siz;

unsigned long long find(unsigned long long x)
{
	if (x != link[x])
		link[x] = find(link[x]);
	return link[x];
}

bool same(unsigned long long a, unsigned long long b)
{
	return (find(a) == find(b));
}

void unite(unsigned long long a, unsigned long long b)
{
	a = find(a);
	b = find(b);
	if (siz[a] < siz[b])
		swap(a, b);
	link[b] = a;
	siz[a] += siz[b];
	siz[b] = siz[a];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	unsigned long long n, m, q;
	cin >> n >> m >> q;
	vector<pair<unsigned long long, unsigned long long>> g;
	unsigned long long x, y;
	for (unsigned long long i = 0; i < n; i++)
	{
		link.push_back(i);
		siz.push_back(1);
	}
	for (unsigned long long i = 0; i < m; i++)
	{
		cin >> x >> y;
		g.push_back({ x - 1,y - 1 });
	}
	vector<bool> ch(m, false);
	vector<unsigned long long> c;
	for (unsigned long long i = 0; i < q; i++)
	{
		cin >> x;
		x--;
		c.push_back(x);
		ch[x] = true;
	}
	for (unsigned long long i = 0; i < ch.size(); i++)
		if (!ch[i] && !same(g[i].first, g[i].second))
			unite(g[i].first, g[i].second);
	unsigned long long ans = 0;
	for (long long i = c.size() - 1; i >= 0; i--)
	{
		if (!same(g[c[i]].first, g[c[i]].second))
		{
			ans += siz[find(g[c[i]].first)] * siz[find(g[c[i]].second)];
			unite(g[c[i]].first, g[c[i]].second);
		}
	}
	cout << ans;
	return 0;
}