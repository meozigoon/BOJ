#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <map>

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
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> w;
			if (i != j)
				g.push_back({ w,i,j });
		}
	sort(g.begin(), g.end());
	for (int i = 0; i < n; i++)
		link.push_back(i);
	vector<pair<int, int>> r;
	for (auto& i : g)
	{
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			r.push_back({ a,b });
		}
	}
	sort(r.begin(), r.end());
	for (auto& i : r)
		cout << i.first + 1 << ' ' << i.second + 1 << '\n';
	return 0;
}