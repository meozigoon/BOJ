#include <iostream>
#include <vector>
#include <queue>
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
	long long n;
	cin >> n;
	vector<vector<long long>> map(n, vector<long long>(n));
	vector<tuple<long long, long long, long long>> g;
	long long a, b, w;
	for (long long i = 0; i < n; i++)
		for (long long j = 0; j < n; j++)
		{
			cin >> a;
			if (i != j)
				g.push_back({ a,i,j });
		}
	sort(g.begin(), g.end());
	for (long long i = 0; i < n; i++)
		link.push_back(i);
	long long ans = 0;
	for (long long i = 0; i < (long long)g.size(); i++)
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