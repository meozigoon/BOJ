#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n, m;
string map[100];
bool visw[100][100];
bool visb[100][100];
int k1, k2;

void dfsw(int a, int b)
{
	k1++;
	visw[a][b] = true;
	if (a + 1 < n)
		if (map[a + 1][b] == 'W' && !visw[a + 1][b])
			dfsw(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] == 'W' && !visw[a - 1][b])
			dfsw(a - 1, b);
	if (b + 1 < m)
		if (map[a][b + 1] == 'W' && !visw[a][b + 1])
			dfsw(a, b + 1);
	if (b - 1 >= 0)
		if (map[a][b - 1] == 'W' && !visw[a][b - 1])
			dfsw(a, b - 1);
	return;
}

void dfsb(int a, int b)
{
	k2++;
	visb[a][b] = true;
	if (a + 1 < n)
		if (map[a + 1][b] == 'B' && !visb[a + 1][b])
			dfsb(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] == 'B' && !visb[a - 1][b])
			dfsb(a - 1, b);
	if (b + 1 < m)
		if (map[a][b + 1] == 'B' && !visb[a][b + 1])
			dfsb(a, b + 1);
	if (b - 1 >= 0)
		if (map[a][b - 1] == 'B' && !visb[a][b - 1])
			dfsb(a, b - 1);
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> m >> n;
	for (int i = 0; i < n; i++)
		cin >> map[i];
	int a = 0, b = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (!visw[i][j] && map[i][j] == 'W')
			{
				k1 = 0;
				dfsw(i, j);
				a += k1 * k1;
			}
			if (!visb[i][j] && map[i][j] == 'B')
			{
				k2 = 0;
				dfsb(i, j);
				b += k2 * k2;
			}
		}
	cout << a << ' ' << b;
}