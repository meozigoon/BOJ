#include <iostream>
#include <vector>

using namespace std;

int n, m;
int map[50][50];
bool vis[50][50];

void dfs(int a, int b)
{
	vis[a][b] = true;
	if (a + 1 < n)
	{
		if (map[a + 1][b] && !vis[a + 1][b])
			dfs(a + 1, b);
		if (b + 1 < m)
			if (map[a + 1][b + 1] && !vis[a + 1][b + 1])
				dfs(a + 1, b + 1);
		if (b - 1 >= 0)
			if (map[a + 1][b - 1] && !vis[a + 1][b - 1])
				dfs(a + 1, b - 1);
	}
	if (a - 1 >= 0)
	{
		if (map[a - 1][b] && !vis[a - 1][b])
			dfs(a - 1, b);
		if (b + 1 < m)
			if (map[a - 1][b + 1] && !vis[a - 1][b + 1])
				dfs(a - 1, b + 1);
		if (b - 1 >= 0)
			if (map[a - 1][b - 1] && !vis[a - 1][b - 1])
				dfs(a - 1, b - 1);
	}
	if (b + 1 < m)
	{
		if (map[a][b + 1] && !vis[a][b + 1])
			dfs(a, b + 1);
		if (a + 1 < m)
			if (map[a + 1][b + 1] && !vis[a + 1][b + 1])
				dfs(a + 1, b + 1);
		if (a - 1 >= 0)
			if (map[a - 1][b + 1] && !vis[a - 1][b + 1])
				dfs(a - 1, b + 1);
	}
	if (b - 1 >= 0)
	{
		if (map[a][b - 1] && !vis[a][b - 1])
			dfs(a, b - 1);
		if (a + 1 < m)
			if (map[a + 1][b - 1] && !vis[a + 1][b - 1])
				dfs(a + 1, b - 1);
		if (a - 1 >= 0)
			if (map[a - 1][b - 1] && !vis[a - 1][b - 1])
				dfs(a - 1, b - 1);
	}
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int cnt;
	while (1)
	{
		cin >> m >> n;
		if (m == 0 && n == 0)
			break;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				cin >> map[i][j];
				vis[i][j] = false;
			}
		cnt = 0;
		for(int i = 0;i<n;i++)
			for(int j = 0;j<m;j++)
				if (!vis[i][j] && map[i][j])
				{
					cnt++;
					dfs(i, j);
				}
		cout << cnt << '\n';
	}
}