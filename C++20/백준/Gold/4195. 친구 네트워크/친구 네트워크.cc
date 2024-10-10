#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <string>
#include <set>
#include <map>

using namespace std;

map<string, string> link;
map<string, int> siz;

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
	if (siz[a] < siz[b])
		swap(a, b);
	link[b] = a;
	siz[a] += siz[b];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t, f;
	string a, b;
	cin >> t;
	pair<map<string, string>::iterator, bool> ch1, ch2;
	while (t--)
	{
		cin >> f;
		while(f--)
		{
			cin >> a >> b;
			ch1 = link.insert(pair<string, string>(a, a));
			ch2 = link.insert(pair<string, string>(b, b));
			if (ch1.second)
				siz[a] = 1;
			if (ch2.second)
				siz[b] = 1;
			if (!same(a, b))
				unite(a, b);
			cout << siz[find(a)] << '\n';
		}
		link.clear();
	}
}