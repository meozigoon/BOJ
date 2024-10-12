#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
#include <set>
#include <cmath>
#include <map>

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

long double dis(pair<long long, long long> p1, pair<long long, long long> p2)
{
	return (long double)sqrt((p1.first - p2.first) * (p1.first - p2.first) + (p1.second - p2.second) * (p1.second - p2.second));
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long double t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<long double> r(n);
		vector<pair<long double, long double>> p(n);
		for (long long i = 0; i < n; i++)
			link.push_back(i);
		for (long long i = 0; i < n; i++)
			cin >> p[i].first >> p[i].second >> r[i];
		for (long long i = 0; i < n; i++)
			for (long long j = i + 1; j < n; j++)
			{
				if (dis(p[i], p[j]) <= (long double)(r[i] + r[j]))
					if (!same(i, j))
						unite(i, j);
			}
		set<long long> s;
		for (auto& i : link)
			s.insert(find(i));
		cout << s.size() << '\n';
		link.clear();
 	}
	return 0;
}