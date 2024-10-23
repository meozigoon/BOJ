#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
#include <set>
#include <map>

using namespace std;

vector<int> link;

int find(int x)
{
	if (x != link[x])
		link[x] = find(link[x]);
	return link[x];
}

bool same(int a, int b)
{
	return (find(a) == find(b));
}

void unite(int a, int b)
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
	int n, m;
	cin >> n >> m;
	int a, b;
	for (int i = 0; i < n; i++)
		link.push_back(i);
	bool ch = true;
	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		if (same(a, b))
		{
			cout << i;
			ch = false;
			break;
		}
		unite(a, b);
	}
	if (ch)
		cout << 0;
	return 0;
}