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
	cin >> v;
	cin >> e;
	vector<long long> p;
	long long w;
	for (long long i = 0; i < v; i++)
		link.push_back(i);
	for (long long i = 0; i < v; i++)
		for (long long j = 0; j < v; j++)
		{
			cin >> w;
			if (i != j && w == 1)
				if (!same(i, j))
					unite(i, j);
		}
	while (e--)
	{
		cin >> w;
		p.push_back(w - 1);
	}
	bool ch = true;
	for (auto& i : p)
		if (!same(p[0], i))
		{
			ch = false;
			break;
		}
	if (ch)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}