#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

vector<long long> link;
vector<long long> siz;

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
	if (siz[a] < siz[b])
		swap(a, b);
	link[b] = a;
	siz[a] += siz[b];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long v, e;
	long long a, b, w;
	long long ans;
	while (1)
	{
		cin >> v >> e;
		if (!v && !e)
			break;
		ans = 0;
		vector<tuple<long long, long long, long long>> g;
		for (long long i = 0; i < e; i++)
		{
			cin >> a >> b >> w;
			ans += w;
			g.push_back({ w,b,a });
			g.push_back({ w,a,b });
		}
		sort(g.begin(), g.end());
		link.clear();
		siz.assign(v, int(1));
		for (long long i = 0; i < v; i++)
			link.push_back(i);
		for (long long i = 0; i < 2 * e; i++)
		{
			tie(w, a, b) = g[i];
			if (!same(a, b))
			{
				unite(a, b);
				ans -= w;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}