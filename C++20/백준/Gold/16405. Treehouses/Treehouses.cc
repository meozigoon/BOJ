#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <cmath>
#include <numeric>

using namespace std;

vector<int> link;

int find(int x)
{
	if (x != link[x])
		link[x] = find(link[x]);
	return link[x];
}

bool same(int a, int b)
{
	return (find(a) == find(b));
}

void unite(int a, int b)
{
	a = find(a);
	b = find(b);
	if (a < b)
		swap(a, b);
	link[b] = a;
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, e, m;
	cin >> n >> e >> m;
	vector<tuple<long double, int, int>> g;
	int a, b;
	long double w;
	vector<pair<long double, long double>> p(n);
	link.resize(n);
	iota(link.begin(), link.end(), 0);
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].first >> p[i].second;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		if (!same(a - 1, b - 1))
			unite(a - 1, b - 1);
	}
	for (int i = 0; i < e; i++)
		if (!same(0, i))
			unite(0, i);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j)
			{
				w = sqrt((p[i].first - p[j].first) * (p[i].first - p[j].first) + (p[i].second - p[j].second) * (p[i].second - p[j].second));
				g.push_back({ w,i,j });
			}
	sort(g.begin(), g.end());
	long double ans = 0;
	for (auto& i : g)
	{
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			ans += w;
		}
	}
	cout << fixed;
	cout.precision(4);
	cout << ans;
	return 0;
}