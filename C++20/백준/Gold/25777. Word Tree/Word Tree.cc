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
	vector<string> s(v);
	for (int i = 0; i < v; i++)
		cin >> s[i];
	for (int i = 0; i < v; i++)
		for (int j = 0; j < v; j++)
		{
			a = 0;
			for (int k = 0; k < e; k++)
				a += abs(s[i][k] - s[j][k]);
			g.push_back({ a,i,j });
		}
	sort(g.begin(), g.end());
	for (int i = 0; i < v; i++)
		link.push_back(i);
	int ans = 0;
	for (auto& i : g)
	{
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			ans = max(ans, w);
		}
	}
	cout << ans;
	return 0;
}