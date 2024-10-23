#include <iostream>
#include <vector>
#include <queue>
#define INF 2147483647

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	vector<vector<long long>> dis(n, vector<long long>(n, INF));
	int tmp;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			cin >> tmp;
			if (tmp != 0)
				dis[i][j] = tmp;
		}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			for (int k = 0; k < n; k++)
				dis[j][k] = min(dis[j][k], dis[j][i] + dis[i][k]);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (dis[i][j] < INF)
				cout << "1 ";
			else
				cout << "0 ";
		}
		cout << '\n';
	}
	return 0;
}