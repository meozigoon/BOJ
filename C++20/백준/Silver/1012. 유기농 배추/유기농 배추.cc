#include <iostream>
#include <vector>

using namespace std;

int n, m;
int map[50][50];
bool vis[50][50];

void dfs(int a, int b)
{
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
	int t;
	cin >> t;
	int k;
	int a, b;
	int cnt;
	while (t--)
	{
		cnt = 0;
		cin >> m >> n >> k;
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
			{
				map[i][j] = 0;
				vis[i][j] = false;
			}
		while (k--)	
		{
			cin >> a >> b;
			map[a][b] = 1;
		}
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (!vis[i][j] && map[i][j])
				{
					cnt++;
					dfs(i, j);
				}
		cout << cnt << '\n';
	}
}