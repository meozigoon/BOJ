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
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	while (1)
	{
		cin >> n;
		if (!n)
			break;
		vector<tuple<double, int, int>> g;
		int a, b;
		double w;
		vector<pair<double, double>> p(n);
		for (int i = 0; i < n; i++)
		{
			cin >> p[i].first >> p[i].second;
		}
		double d;
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
		for (int i = 0; i < n; i++)
			link.push_back(i);
		double ans = 0;
		for (int i = 0; i < n * (n - 1); i++)
		{
			tie(w, a, b) = g[i];
			if (!same(a, b))
			{
				unite(a, b);
				ans += w;
			}
		}
		cout << fixed;
		cout.precision(2);
		cout << ans << '\n';
		link.clear();
	}
	return 0;
}