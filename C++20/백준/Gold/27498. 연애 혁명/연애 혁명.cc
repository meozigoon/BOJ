#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
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
	int v, e;
	int a, b, w, d;
	int ans = 0;
	cin >> v >> e;
	vector<tuple<int, int, int>> g;
	link.resize(v);
	iota(link.begin(), link.end(), 0);
	for (int i = 0; i < e; i++)
	{
		cin >> a >> b >> w >> d;
		if (d && !same(a - 1, b - 1))
			unite(a - 1, b - 1);
		else
		{
			g.push_back({ w,a - 1,b - 1 });
			ans += w;
		}
	}
	sort(g.begin(), g.end(), greater<>());
	for (auto& i : g)
	{
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			ans -= w;
		}
	}
	cout << ans;
	return 0;
}