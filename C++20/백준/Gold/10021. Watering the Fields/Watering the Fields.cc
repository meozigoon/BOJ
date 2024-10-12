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
	cin >> n;
	vector<tuple<long long, int, int>> g;
	int a, b, c;
	int w;
	cin >> c;
	vector<pair<int, int>> p(n);
	for (int i = 0; i < n; i++)
		cin >> p[i].first >> p[i].second;
	long long d;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j)
			{
				d = ((p[i].first - p[j].first) * (p[i].first - p[j].first) + (p[i].second - p[j].second) * (p[i].second - p[j].second)) * 1LL;
				g.push_back({ d,i,j });
			}
	sort(g.begin(), g.end());
	for (int i = 0; i < n; i++)
		link.push_back(i);
	long long ans = 0;
	int cnt = 0;
	for (auto& i: g)
	{
		tie(w, a, b) = i;
		if (!same(a, b) && w >= c)
		{
			unite(a, b);
			ans += w;
			cnt++;
		}
	}
	if (cnt != n - 1)
		cout << -1;
	else
		cout << ans;
	return 0;
}