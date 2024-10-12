#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
int map[100][100];
bool vis[100][100];
int l;

void dfs(int a, int b)
{
	vis[a][b] = true;
	l++;
	if (a + 1 < n)
		if (!vis[a + 1][b] && !map[a + 1][b])
			dfs(a + 1, b);
	if (a - 1 >= 0)
		if (!vis[a - 1][b] && !map[a - 1][b])
			dfs(a - 1, b);
	if (b + 1 < m)
		if (!vis[a][b + 1] && !map[a][b + 1])
			dfs(a, b + 1);
	if (b - 1 >= 0)
		if (!vis[a][b - 1] && !map[a][b - 1])
			dfs(a, b - 1);
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int k;
	cin >> n >> m >> k;
	int x1, x2, y1, y2;
	while (k--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = min(x1, x2); i < max(x1, x2); i++)
			for (int j = min(y1, y2); j < max(y1, y2); j++)
				map[j][i] = 1;
	}
	int cnt = 0;
	vector<int> v;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!vis[i][j] && !map[i][j])
			{
				cnt++;
				dfs(i, j);
				v.push_back(l);
				l = 0;
			}
	cout << cnt << '\n';
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
}