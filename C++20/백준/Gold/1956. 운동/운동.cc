#include <iostream>
#include <vector>
#include <queue>
#define INF 2147483647

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	vector<vector<long long>> ad(n, vector<long long>(n, 0));
	vector<vector<long long>> dis(n, vector<long long>(n, INF));
	int a, b, c;
	while (m--)
	{
		cin >> a >> b >> c;
		if (ad[a - 1][b - 1] == 0)
			ad[a - 1][b - 1] = c;
		else if (ad[a - 1][b - 1] > c)
			ad[a - 1][b - 1] = c;
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				dis[i][j] = 0;
			else if (ad[i][j] != 0)
				dis[i][j] = ad[i][j];
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				dis[j][k] = min(dis[j][k], dis[j][i] + dis[i][k]);
	long long ans = INF;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i != j)
				ans = min(ans, dis[i][j] + dis[j][i]);
	if (ans == INF)
		cout << -1;
	else
		cout << ans;
	return 0;
}