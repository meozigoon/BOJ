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
	int a, b;
	queue<int> q;
	vector<int> ind(n, 0);
	vector<vector<int>> g(n);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		ind[b - 1]++;
		g[a - 1].push_back(b - 1);
	}
	for (int i = 0; i < n; i++)
		if (ind[i] == 0)
			q.push(i);
	for (int i = 0; i < n; i++)
	{
		a = q.front();
		q.pop();
		cout << a + 1 << ' ';
		for (auto& i : g[a])
		{
			ind[i]--;
			if (ind[i] == 0)
				q.push(i);
		}
	}
	return 0;
}