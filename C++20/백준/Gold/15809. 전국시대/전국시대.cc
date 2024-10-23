#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <set>

using namespace std;

int siz[100001];
int link[100001];

long long find(long long x)
{
	if (x == -1)
		return -1;
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

void unite2(long long a, long long b)
{
	a = find(a);
	b = find(b);
	if (siz[a] == siz[b])
	{
		siz[a] = 0;
		siz[b] = 0;
		link[a] = 0;
		link[b] = 0;
	}
	else
	{
		if (siz[a] < siz[b])
			swap(a, b);
		link[b] = a;
		siz[a] -= siz[b];
		siz[b] = 0;
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long n, m, a, b, c;
	cin >> n >> m;
	for (long long i = 1; i <= n; i++)
	{
		cin >> a;
		link[i] = i;
		siz[i] = a;
	}
	while (m--)
	{
		cin >> a >> b >> c;
		if (a == 1)
		{
			if (!same(b, c))
				unite(b, c);
		}
		else if (a == 2)
		{
			if (!same(b, c))
				unite2(b, c);
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++)
		if (find(i) == i)
			cnt++;
	cout << cnt << '\n';
	vector<int> ans;
	for (int i = 1; i <= n; i++)
		if (siz[i] != 0 && find(i) == i)
			ans.push_back(siz[i]);
	sort(ans.begin(), ans.end());
	for (auto& i : ans)
		if (i != 0)
			cout << i << ' ';
	return 0;
}