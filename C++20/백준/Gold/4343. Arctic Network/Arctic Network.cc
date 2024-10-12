#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <cmath>

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
	long long n, t, m;
	long long a, b;
	long double w;
	cin >> t;
	cout << fixed;
	cout.precision(2);
	while (t--)
	{
		cin >> m >> n;
		vector<tuple<long double, long long, long long>> g;
		vector<pair<long double, long double>> p(n);
		for (long long i = 0; i < n; i++)
			cin >> p[i].first >> p[i].second;
		long double d;
		for (long long i = 0; i < n; i++)
		{
			for (long long j = 0; j < n; j++)
			{
				if (i == j)
					continue;
				d = sqrt((p[i].first - p[j].first) * (p[i].first - p[j].first) + (p[i].second - p[j].second) * (p[i].second - p[j].second));
				g.push_back({ d,i,j });
			}
		}
		sort(g.begin(), g.end());
		for (long long i = 0; i < n; i++)
			link.push_back(i);
		vector<long double> ans;
		for (auto& i : g)
		{
			tie(w, a, b) = i;
			if (!same(a, b))
			{
				unite(a, b);
				ans.push_back(w);
			}
		}
		cout << ans[ans.size() - m] << '\n';
		link.clear();
	}
	return 0;
}