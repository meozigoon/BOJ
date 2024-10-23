#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int cnt;
int map[100][100];
bool vis[100][100];

void dfs(int a, int b)
{
	cnt++;
	vis[a][b] = true;
	if (a + 1 < m)
		if (map[a + 1][b] && !vis[a + 1][b])
			dfs(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] && !vis[a - 1][b])
			dfs(a - 1, b);
	if (b + 1 < n)
		if (map[a][b + 1] && !vis[a][b + 1])
			dfs(a, b + 1);
	if (b - 1 >= 0)
		if (map[a][b - 1] && !vis[a][b - 1])
			dfs(a, b - 1);
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int k;
	int a, b;
	int ma = 0;
	cin >> m >> n >> k;
	while (k--)
	{
		cin >> a >> b;
		map[a - 1][b - 1] = 1;
	}
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (!vis[i][j] && map[i][j])
			{
				cnt = 0;
				dfs(i, j);
				ma = max(cnt, ma);
			}
	cout << ma;
}