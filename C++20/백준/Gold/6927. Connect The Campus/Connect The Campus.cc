#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <cmath>

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
	int n;
	cin >> n;
	vector<tuple<long double, int, int>> g;
	int a, b;
	long double w;
	vector<pair<long double, long double>> p(n);
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].first >> p[i].second;
	}
	for (int i = 0; i < n; i++)
		link.push_back(i);
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		if (!same(a - 1, b - 1))
			unite(a - 1, b - 1);
	}
	long double d;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			d = sqrt((p[i].first - p[j].first) * (p[i].first - p[j].first) + (p[i].second - p[j].second) * (p[i].second - p[j].second));
			g.push_back({ d,i,j });
		}
	}
	sort(g.begin(), g.end());
	long double ans = 0;
	vector<pair<int, int>> v;
	for (auto& i : g)
	{
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			v.push_back({ a,b });
			ans += w;
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << ans << '\n';
	for (auto& i : v)
		cout << i.first + 1 << ' ' << i.second + 1 << '\n';
	return 0;
}