#include <iostream>
#include <string>

using namespace std;

int n;
string map[100];
bool vis[100][100];
bool visrg[100][100];

void r(int a, int b)
{
	vis[a][b] = true;
	if (a + 1 < n)
		if (map[a + 1][b] == 'R' && !vis[a + 1][b])
			r(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] == 'R' && !vis[a - 1][b])
			r(a - 1, b);
	if (b + 1 < n)
		if (map[a][b + 1] == 'R' && !vis[a][b + 1])
			r(a, b + 1);
	if (b - 1 >= 0)
		if (map[a][b - 1] == 'R' && !vis[a][b - 1])
			r(a, b - 1);
}

void g(int a, int b)
{
	vis[a][b] = true;
	if (a + 1 < n)
		if (map[a + 1][b] == 'G' && !vis[a + 1][b])
			g(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] == 'G' && !vis[a - 1][b])
			g(a - 1, b);
	if (b + 1 < n)
		if (map[a][b + 1] == 'G' && !vis[a][b + 1])
			g(a, b + 1);
	if (b - 1 >= 0)
		if (map[a][b - 1] == 'G' && !vis[a][b - 1])
			g(a, b - 1);
}

void bl(int a, int b)
{
	vis[a][b] = true;
	visrg[a][b] = true;
	if (a + 1 < n)
		if (map[a + 1][b] == 'B' && !vis[a + 1][b])
			bl(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] == 'B' && !vis[a - 1][b])
			bl(a - 1, b);
	if (b + 1 < n)
		if (map[a][b + 1] == 'B' && !vis[a][b + 1])
			bl(a, b + 1);
	if (b - 1 >= 0)
		if (map[a][b - 1] == 'B' && !vis[a][b - 1])
			bl(a, b - 1);
}

void rg(int a, int b)
{
	visrg[a][b] = true;
	if (a + 1 < n)
		if ((map[a + 1][b] == 'R' || map[a + 1][b] == 'G') && !visrg[a + 1][b])
			rg(a + 1, b);
	if (a - 1 >= 0)
		if ((map[a - 1][b] == 'R' || map[a - 1][b] == 'G') && !visrg[a - 1][b])
			rg(a - 1, b);
	if (b + 1 < n)
		if ((map[a][b + 1] == 'R' || map[a][b + 1] == 'G') && !visrg[a][b + 1])
			rg(a, b + 1);
	if (b - 1 >= 0)
		if ((map[a][b - 1] == 'R' || map[a][b - 1] == 'G') && !visrg[a][b - 1])
			rg(a, b - 1);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> map[i];
	int cnt = 0, cntrg = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (!vis[i][j] && map[i][j] == 'R')
			{
				cnt++;
				r(i, j);
			}
			if (!vis[i][j] && map[i][j] == 'G')
			{
				cnt++;
				g(i, j);
			}
			if (!vis[i][j] && map[i][j] == 'B')
			{
				cnt++;
				cntrg++;
				bl(i, j);
			}
			if (!visrg[i][j] && (map[i][j] == 'R' || map[i][j] == 'G'))
			{
				cntrg++;
				rg(i, j);
			}
		}
	cout << cnt << ' ' << cntrg;
}