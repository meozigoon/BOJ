#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <map>

using namespace std;

map<char, char> link;

char find(char x)
{
	if (x != link[x])
		link[x] = find(link[x]);
	return link[x];
}

bool same(char a, char b)
{
	return (find(a) == find(b));
}

void unite(char a, char b)
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
	int n, a, b;
	char c, d;
	while (1)
	{
		vector<tuple<int, char, char>> g;
		cin >> n;
		if (!n)
			break;
		for (int i = 0; i < n; i++)
			link[i + 'A'] = i + 'A';
		while (--n)
		{
			cin >> c >> a;
			while (a--)
			{
				cin >> d >> b;
				g.push_back({ b,c,d });
			}
		}
		sort(g.begin(), g.end());
		int ans = 0;
		for (auto& i : g)
		{
			tie(n, a, b) = i;
			if (!same(a, b))
			{
				unite(a, b);
				ans += n;
			}
		}
		cout << ans << '\n';
		link.clear();
	}
	return 0;
}