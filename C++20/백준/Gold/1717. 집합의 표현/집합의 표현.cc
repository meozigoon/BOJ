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
	long long v, e;
	cin >> v >> e;
	vector<tuple<long long, long long, long long>> g;
	long long a, b, w;
	for (long long i = 0; i < v + 1; i++)
		link.push_back(i);
	for (long long i = 0; i < e; i++)
	{
		cin >> w >> a >> b;
		if (w)
		{
			if (same(a, b))
				cout << "YES\n";
			else
				cout << "NO\n";
		}
		else
			if (!same(a, b))
				unite(a, b);
	}
	return 0;
}