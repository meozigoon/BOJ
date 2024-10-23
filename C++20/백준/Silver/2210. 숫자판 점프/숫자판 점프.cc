#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[5][5];
int cnt;
bool ch[1000000];

void dfs(int a, int b, int n, int k)
{
	n *= 10;
	n += arr[a][b];
	if (k == 6)
	{
		if (!ch[n])
		{
			cnt++;
			ch[n] = true;
		}
		return;
	}
	if (a + 1 < 5)
		dfs(a + 1, b, n, k + 1);
	if (a - 1 >= 0)
		dfs(a - 1, b, n, k + 1);
	if (b + 1 < 5)
		dfs(a, b + 1, n, k + 1);
	if (b - 1 >= 0)
		dfs(a, b - 1, n, k + 1);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			dfs(i, j, 0, 1);
	cout << cnt;
}
