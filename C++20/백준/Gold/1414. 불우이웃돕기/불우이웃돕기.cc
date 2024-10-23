#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <numeric>
#include <string>

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
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int v, e;
	int a, b, w, d;
	int ans = 0;
	int cnt = 0;
	string s;
	cin >> v;
	vector<tuple<int, int, int>> g;
	link.resize(v);
	iota(link.begin(), link.end(), 0);
	for (int i = 0; i < v; i++)
	{
		cin >> s;
		for (int j = 0; j < v; j++)
		{
			if ('a' <= s[j] && s[j] <= 'z')
			{
				g.push_back({ s[j] - 'a' + 1,i,j });
				ans += s[j] - 'a' + 1;
			}
			else if ('A' <= s[j] && s[j] <= 'Z')
			{
				g.push_back({ s[j] - 'A' + 27,i,j });
				ans += s[j] - 'A' + 27;
			}
		}
	}
	sort(g.begin(), g.end());
	for (auto& i : g)
	{
		tie(w, a, b) = i;
		if (!same(a, b))
		{
			unite(a, b);
			ans -= w;
			cnt++;
		}
	}
	if (cnt != v - 1)
		cout << -1;
	else
		cout << ans;
	return 0;
}