#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

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
	long long v, e, k;
	cin >> v >> e >> k;
	vector<tuple<long long, long long, long long>> g;
	long long a, b, w;
	for (long long i = 0; i < v; i++)
	{
		cin >> w;
		g.push_back({ w,v,i });
	}
	sort(g.begin(), g.end());
	for (long long i = 0; i < v + 1; i++)
		link.push_back(i);
	while (e--)
	{
		cin >> a >> b;
		if (!same(a - 1, b - 1))
			unite(a - 1, b - 1);
	}
	long long ans = 0;
	for (auto& i : g)
	{
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			ans += w;
		}
	}
	if (ans > k)
		cout << "Oh no";
	else
	{
		bool ch = true;
		for (long long i = 0; i < v + 1; i++)
			if (!same(i, v))
			{
				ch = false;
				break;
			}
		if (!ch)
			cout << "Oh no";
		else
			cout << ans;
	}
	return 0;
}