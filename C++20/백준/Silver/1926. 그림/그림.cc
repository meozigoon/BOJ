#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, m;
int map[500][500];
bool vis[500][500];
int k;

void dfs(int a, int b)
{
	k++;
	vis[a][b] = true;
	if (a + 1 < n)
		if (map[a + 1][b] && !vis[a + 1][b])
			dfs(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] && !vis[a - 1][b])
			dfs(a - 1, b);
	if (b + 1 < m)
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
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> map[i][j];
	int cnt = 0;
	int ma = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!vis[i][j] && map[i][j])
			{
				cnt++;
				k = 0;
				dfs(i, j);
				ma = max(ma, k);
			}
	cout << cnt << '\n' << ma;
}