#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int n;
string map[25];
bool vis[25][25];
int k;

void dfs(int a, int b)
{
	k++;
	vis[a][b] = true;
	if (a + 1 < n)
		if (map[a + 1][b] == '1' && !vis[a + 1][b])
			dfs(a + 1, b);
	if (a - 1 >= 0)
		if (map[a - 1][b] == '1' && !vis[a - 1][b])
			dfs(a - 1, b);
	if (b + 1 < n)
		if (map[a][b + 1] == '1' && !vis[a][b + 1])
			dfs(a, b + 1);
	if (b - 1 >= 0)
		if (map[a][b - 1] == '1' && !vis[a][b - 1])
			dfs(a, b - 1);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> map[i];
	int cnt = 0;
	vector<int> arr;
	for(int i = 0;i<n;i++)
		for(int j = 0;j<n;j++)
			if (!vis[i][j] && map[i][j] == '1')
			{
				cnt++;
				k = 0;
				dfs(i, j);
				arr.push_back(k);
			}
	sort(arr.begin(), arr.end());
	cout << cnt << '\n';
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << '\n';
}