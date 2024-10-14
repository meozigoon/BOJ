#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool ch;
int m, n;
string map[1000];
int vis[1000][1000];

void dfs(int a, int b)
{
	if (a == m - 1)
	{
		ch = true;
		return;
	}
	if (ch)
		return;
	vis[a][b] = true;
	if (a + 1 < m)
		if (map[a + 1][b] == '0' && !vis[a + 1][b])
			dfs(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] == '0' && !vis[a - 1][b])
			dfs(a - 1, b);
	if (b + 1 < n)
		if (map[a][b + 1] == '0' && !vis[a][b + 1])
			dfs(a, b + 1);
	if (b - 1 >= 0)
		if (map[a][b - 1] == '0' && !vis[a][b - 1])
			dfs(a, b - 1);
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> m >> n;
	for (int i = 0; i < m; i++)
		cin >> map[i];
	for (int i = 0; i < n; i++)
		if (map[0][i] == '0')
		{
			dfs(0, i);
			if (ch)
				break;
		}
	if (ch)
		cout << "YES";
	else
		cout << "NO";
}
