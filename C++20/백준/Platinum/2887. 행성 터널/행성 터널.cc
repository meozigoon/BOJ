#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <queue>
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
	vector<tuple<int, int, int>> g;
	int a, b, w;
	vector<pair<int, int>> x;
	vector<pair<int, int>> y;
	vector<pair<int, int>> z;
	int X, Y, Z;
	for (int i = 0; i < n; i++)
	{
		cin >> X >> Y >> Z;
		x.push_back({ X,i });
		y.push_back({ Y,i });
		z.push_back({ Z,i });
	}
	sort(x.begin(), x.end());
	sort(y.begin(), y.end());
	sort(z.begin(), z.end());
	for (int i = 0; i < n - 1; i++)
	{
		g.push_back({ x[i + 1].first - x[i].first, x[i].second, x[i + 1].second });
		g.push_back({ y[i + 1].first - y[i].first, y[i].second, y[i + 1].second });
		g.push_back({ z[i + 1].first - z[i].first, z[i].second, z[i + 1].second });
	}
	sort(g.begin(), g.end());
	for (int i = 0; i < n; i++)
		link.push_back(i);
	int ans = 0;
	for (int i = 0; i < g.size(); i++)
	{
		tie(w, a, b) = g[i];
		if (!same(a, b))
		{
			unite(a, b);
			ans += w;
		}
	}
	cout << ans;
	return 0;
}