#include <iostream>
#include <vector>
#include <tuple>
#include <string>
#include <set>
#include <cmath>
#include <map>

using namespace std;

long long link[1000001];
long long siz[1000001];

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
	long long n;
	cin >> n;
	long long a, b;
	char c;
	for (int i = 1; i < 1000001; i++)
	{
		link[i] = i;
		siz[i] = 1;
	}
	pair<map<long long, long long>::iterator, bool> ch;
	while (n--)
	{
		cin >> c >> a;
		if (c == 'I')
		{
			cin >> b;
			if (!same(a, b))
				unite(a, b);
		}
		else if (c == 'Q')
		{
			cout << siz[find(a)] << '\n';
		}
	}
	return 0;
}