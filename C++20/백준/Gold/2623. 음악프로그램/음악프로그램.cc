#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <queue>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	int a;
	queue<int> q;
	vector<int> ind(n, 0);
	vector<vector<int>> g(n);
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		vector<int> v(a);
		for (int i = 0; i < a; i++)
		{
			cin >> v[i];
			v[i]--;
		}
		for (int i = 0; i < a; i++)
			for (int j = i + 1; j < a; j++)
			{
				g[v[i]].push_back(v[j]);
				ind[v[j]]++;
			}
	}
	for (int i = 0; i < n; i++)
		if (ind[i] == 0)
			q.push(i);
	bool ch = true;
	vector<int> ans;
	for (int i = 0; i < n; i++)
	{
		if (q.empty())
		{
			ch = false;
			break;
		}
		a = q.front();
		q.pop();
		ans.push_back(a + 1);
		for (auto& i : g[a])
		{
			ind[i]--;
			if (ind[i] == 0)
				q.push(i);
		}
	}
	if (ch)
		for (auto& i : ans)
			cout << i << ' ';
	else
		cout << 0;
	return 0;
}