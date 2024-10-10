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
		cin >> a >> b;
		ad[a - 1][b - 1] = 1;
		ad[b - 1][a - 1] = 1;
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
	vector<long long> sum(n, 0);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (dis[i][j] < INF)
				sum[i] += dis[i][j];
	int ma = INF;
	for (int i = 0; i < n; i++)
		if (ma > sum[i])
			ma = sum[i];
	for (int i = 0; i < n; i++)
		if (sum[i] == ma)
		{
			cout << i + 1;
			break;
		}
	return 0;
}