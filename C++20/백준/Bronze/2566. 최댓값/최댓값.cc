#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n[9][9];
	for (int i = 0; i < 9; i++)
		cin >> n[i][0] >> n[i][1] >> n[i][2] >> n[i][3] >> n[i][4] >> n[i][5] >> n[i][6] >> n[i][7] >> n[i][8];
	int cpy[9][9];
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			cpy[i][j] = n[i][j];
	for (int i = 0; i < 9; i++)
		sort(cpy[i], cpy[i] + 9);
	int g[9];
	for (int i = 0; i < 9; i++)
		g[i] = cpy[i][8];
	sort(g, g + 9);
	int x, y;
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			if (g[8] == n[i][j])
			{
				x = i + 1;
				y = j + 1;
				break;
			}
	cout << g[8] << '\n' << x << ' ' << y;
	return 0;
}