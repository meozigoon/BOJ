#include <iostream>
#include <queue>

using namespace std;

int n, m;
int ch[101][101];
int vis[101][101];
char map[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bfs(int x, int y)
{
	vis[x][y] = 1;
	queue<pair<int, int> > q;
	q.push(make_pair(x, y));
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		int x2, y2;
		for (int i = 0; i < 4; i++)
		{
			x2 = x + dx[i];
			y2 = y + dy[i];
			if (0 <= x2 && x2 < n && 0 <= y2 && y2 < m)
			{
				if (map[x2][y2] == '1' && vis[x2][y2] == 0)
				{
					ch[x2][y2] = ch[x][y] + 1;
					vis[x2][y2] = 1;
					q.push(make_pair(x2, y2));
				}
			}
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> map[i];
	bfs(0, 0);
	cout << ch[n - 1][m - 1] + 1;
}