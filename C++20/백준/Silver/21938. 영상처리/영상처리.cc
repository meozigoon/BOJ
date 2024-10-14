#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, m;
int map[1000][1000];
bool vis[1000][1000];

void dfs(int a, int b)
{
	vis[a][b] = true;
	if (a + 1 < n)
		if (!vis[a + 1][b] && map[a + 1][b])
			dfs(a + 1, b);
	if (a - 1 >= 0)
		if (!vis[a - 1][b] && map[a - 1][b])
			dfs(a - 1, b);
	if (b + 1 < m)
		if (!vis[a][b + 1] && map[a][b + 1])
			dfs(a, b + 1);
	if (b - 1 >= 0)
		if (!vis[a][b - 1] && map[a][b - 1])
			dfs(a, b - 1);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n >> m;
	int r, g, b;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cin >> r >> g >> b;
			map[i][j] = (r + g + b) / 3;
		}
	int t;
	cin >> t;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] >= t)
				map[i][j] = 1;
			else
				map[i][j] = 0;
		}
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!vis[i][j] && map[i][j])
			{
				cnt++;
				dfs(i, j);
			}
	cout << cnt;
}