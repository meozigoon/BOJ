#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <tuple>
#define INF 9223372036854775807

using namespace std;

vector<int> link;
vector<int> siz;

int find(int x)
{
	while (x != link[x])
		x = link[x];
	return x;
}

bool same(int a, int b)
{
	return (find(a) == find(b));
}

void unite(int a, int b)
{
	a = find(a);
	b = find(b);
	if (siz[a] < siz[b])
		swap(a, b);
	siz[a] += siz[b];
	link[b] = a;
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
		g.push_back({ w,b - 1,a - 1 });
		g.push_back({ w,a - 1,b - 1 });
	}
	sort(g.begin(), g.end());
	link.assign(v, int());
	siz.assign(v, int());
	for (int i = 0; i < v; i++)
	{
		link[i] = i;
		siz[i] = i;
	}
	int ans = 0;
	for (auto& i : g)
	{
		if (!same(get<1>(i), get<2>(i)))
		{
			unite(get<1>(i), get<2>(i));
			ans += get<0>(i);
		}
	}
	cout << ans;
	return 0;
}