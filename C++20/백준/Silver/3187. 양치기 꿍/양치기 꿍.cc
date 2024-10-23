#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, m;
string map[250];
bool vis[250][250];
int w, s;

void dfs(int a, int b)
{
	if (map[a][b] == 'k')
		s++;
	if (map[a][b] == 'v')
		w++;
	vis[a][b] = true;
	if (a + 1 < n)
		if (map[a + 1][b] != '#' && !vis[a + 1][b])
			dfs(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] != '#' && !vis[a - 1][b])
			dfs(a - 1, b);
	if (b + 1 < m)
		if (map[a][b + 1] != '#' && !vis[a][b + 1])
			dfs(a, b + 1);
	if (b - 1 >= 0)
		if (map[a][b - 1] != '#' && !vis[a][b - 1])
			dfs(a, b - 1);
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> map[i];
	int sh = 0, wo = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (!vis[i][j] && map[i][j] != '#')
			{
				w = 0, s = 0;
				dfs(i, j);
				if (s > w)
					sh += s;
				else
					wo += w;
			}
	cout << sh << ' ' << wo;
}