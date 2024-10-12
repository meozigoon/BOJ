#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
#include <set>
#include <map>

using namespace std;

map<string, string> link;

string find(string x)
{
	if (x != link[x])
		link[x] = find(link[x]);
	return link[x];
}

bool same(string a, string b)
{
	return (find(a) == find(b));
}

void unite(string a, string b)
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
	long double w;
	string a, b;
	long double ans = 0;
	long double disma;
	cin >> disma;
	cin >> v;
	vector<string> na;
	for (int i = 0; i < v; i++)
	{
		cin >> a;
		na.push_back(a);
	}
	cin >> e;
	vector<tuple<long double, string, string>> g;
	for (long long i = 0; i < e; i++)
	{
		cin >> a >> b >> w;
		g.push_back({ w,b,a });
		g.push_back({ w,a,b });
	}
	sort(g.begin(), g.end());
	for (long long i = 0; i < v; i++)
		link[na[i]] = na[i];
	for (long long i = 0; i < 2 * e; i++)
	{
		tie(w, a, b) = g[i];
		if (!same(a, b))
		{
			unite(a, b);
			ans += w;
		}
	}
	if (ans > disma)
		cout << "Not enough cable";
	else
	{
		cout << fixed;
		cout.precision(1);
		cout << "Need " << ans << " miles of cable";
	}
	return 0;
}