#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

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
	int v, e, t;
	cin >> v >> e >> t;
	vector<tuple<int, int, int>> g;
	vector<vector<int>> p(e);
	int a, b, w;
	for (int i = 0; i < v + 1; i++)
		link.push_back(i);
	for (int i = 0; i < t; i++)
	{
		cin >> a;
		link[a] = 0;
	}
	for (int i = 0; i < e; i++)
	{
		cin >> w;
		cin >> a;
		p[i].push_back(a);
		w--;
		while (w--)
		{
			cin >> b;
			p[i].push_back(b);
			if (!same(a, b))
				unite(a, b);
		}
	}
	int ans = e;
	for (auto& i : p)
		for (auto& j : i)
			if (same(j, 0))
			{
				ans--;
				break;
			}
	cout << ans;
	return 0;
}