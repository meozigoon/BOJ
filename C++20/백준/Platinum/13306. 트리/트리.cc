#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <set>
#include <stack>

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
	int n, q;
	int a, b, c;
	cin >> n >> q;
	q += n - 1;
	vector<int> p(n);
	vector<vector<int>> qu;
	for (int i = 1; i < n; i++)
	{
		cin >> p[i];
		p[i]--;
	}
	for (int i = 0; i < q; i++)
	{
		cin >> a >> b;
		b--;
		if (a)
		{
			cin >> c;
			c--;
			qu.push_back({ a,b,c });
		}
		else
			qu.push_back({ a,b });
	}
	for (int i = 0; i < n; i++)
		link.push_back(i);
	stack<bool> s;
	for (int i = q - 1; i >= 0; i--)
	{
		if (qu[i][0])
			s.push(same(qu[i][1], qu[i][2]));
		else
			if (!same(qu[i][1], p[qu[i][1]]))
				unite(qu[i][1], p[qu[i][1]]);
	}
	while(!s.empty())
	{
		if (s.top())
			cout << "YES\n";
		else
			cout << "NO\n";
		s.pop();
	}
	return 0;
}