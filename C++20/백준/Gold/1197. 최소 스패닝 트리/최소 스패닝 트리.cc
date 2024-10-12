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
	cin >> v >> e;
	vector<tuple<int, int, int>> g;
	int a, b, w;
	for (int i = 0; i < e; i++)
	{
		cin >> a >> b >> w;
		g.push_back({ w,a - 1,b - 1 });
	}
	sort(g.begin(), g.end());
	link.resize(v);
	iota(link.begin(), link.end(), 0);
	int ans = 0;
	for (auto& i : g)
	{
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			ans += w;
		}
	}
	cout << ans;
	return 0;
}