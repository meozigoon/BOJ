#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <set>

using namespace std;

vector<long long> link;
vector<long long> siz;

struct line
{
	pair<long long, long long> p1, p2;
};

long long ccw(pair<long long, long long> a, pair<long long, long long> b, pair<long long, long long> c)
{
	long long s;
	s = a.first * b.second + b.first * c.second + c.first * a.second - a.second * b.first - b.second * c.first - c.second * a.first;
	if (s > 0)
		return 1;
	else if (s < 0)
		return -1;
	else
		return 0;
}

bool check(line l1, line l2)
{
	long long abcd = ccw(l1.p1, l1.p2, l2.p1) * ccw(l1.p1, l1.p2, l2.p2);
	long long cdab = ccw(l2.p1, l2.p2, l1.p1) * ccw(l2.p1, l2.p2, l1.p2);
	if (abcd == 0 && cdab == 0)
	{
		if (l1.p1 > l1.p2)
			swap(l1.p1, l1.p2);
		if (l2.p1 > l2.p2)
			swap(l2.p1, l2.p2);
		if (l1.p2 >= l2.p1 && l1.p1 <= l2.p2)
			return true;
		else
			return false;
	}
	else if (abcd <= 0 && cdab <= 0)
		return true;
	else
		return false;
}

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
	siz[a] += siz[b];
	link[b] = a;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long n;
	cin >> n;
	vector<line> l(n);
	long long a, b, w;
	for (long long i = 0; i < n; i++)
		cin >> l[i].p1.first >> l[i].p1.second >> l[i].p2.first >> l[i].p2.second;
	for (long long i = 0; i < n; i++)
	{
		link.push_back(i);
		siz.push_back(1);
	}
	for (long long i = 0; i < n; i++)
		for (long long j = i + 1; j < n; j++)
			if (check(l[i], l[j]))
			{
				if (!same(i, j))
					unite(i, j);
			}
	set<long long> s;
	long long ma = 0;
	for (long long i = 0; i < n; i++)
	{
		s.insert(find(i));
		ma = max(siz[i], ma);
	}
	cout << s.size() << '\n' << ma;
	return 0;
}