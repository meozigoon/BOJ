#include <iostream>
#include <algorithm>

using namespace std;

int n;
int map[500][500];
int dp[500][500];
int ma;

bool b(int i, int j)
{
	if (i < 0 || j < 0 || i >= n || j >= n)
		return false;
	else
		return true;
}

int dfs(int i, int j, int v)
{
	int day = 0;
	int arr[4] = { 0, };
	if (false == b(i, j))
		return 0;
	if (dp[i][j] != 0)
		return dp[i][j];
	if (b(i, j + 1) && (map[i][j + 1] > v))
		arr[0] = dfs(i, j + 1, map[i][j + 1]);
	if (b(i, j - 1) && (map[i][j - 1] > v))
		arr[1] = dfs(i, j - 1, map[i][j - 1]);
	if (b(i - 1, j) && (map[i - 1][j] > v))
		arr[2] = dfs(i - 1, j, map[i - 1][j]);
	if (b(i + 1, j) && (map[i + 1][j] > v))
		arr[3] = dfs(i + 1, j, map[i + 1][j]);
	dp[i][j] = std::max({ arr[0], arr[1], arr[2], arr[3] }) + 1;
	ma = max(ma, dp[i][j]);
	return dp[i][j];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			dfs(i, j, map[i][j]);
	cout << ma;
	return 0;
}