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
	long long v;
	cin >> v;
	vector<tuple<long long, long long, long long>> g;
	long long a, b, w;
	for (long long i = 0; i < v; i++)
		link.push_back(i);
	long long ans = 0;
	for (long long i = 0; i < v; i++)
		for (long long j = 0; j < v; j++)
		{
			cin >> w;
			if (i != j)
			{
				if (w < 0)
				{
					unite(i, j);
					ans += -w;
				}
				else
					g.push_back({ w,i,j });
			}
		}
	ans /= 2;
	sort(g.begin(), g.end());
	long long cnt = 0;
	vector<pair<long long, long long>> k;
	for (auto& i : g)
	{
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			ans += w;
			cnt++;
			k.push_back({ min(a,b),max(a,b) });
		}
	}
	cout << ans << ' ' << cnt << '\n';
	for (auto& i : k)
		cout << i.first + 1 << ' ' << i.second + 1 << '\n';
	return 0;
}