#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#define INF 2147483647

using namespace std;

int d(int n, vector<vector<int>> ad)
{
	priority_queue<tuple<int, int, int>> q;
	vector<vector<int>> dis(n, vector<int>(n, INF));
	vector<vector<bool>> vis(n, vector<bool>(n, false));
	dis[0][0] = ad[0][0];
	q.push(make_tuple(-ad[0][0], 0, 0));
	int a, b, w;
	while (!q.empty())
	{
		a = get<1>(q.top());
		b = get<2>(q.top());
		q.pop();
		if (vis[a][b])
			continue;
		vis[a][b] = true;
		if (a + 1 < n && dis[a][b] + ad[a + 1][b] < dis[a + 1][b])
		{
			dis[a + 1][b] = dis[a][b] + ad[a + 1][b];
			q.push(make_tuple(-dis[a + 1][b], a + 1, b));
		}
		if (a - 1 >= 0 && dis[a][b] + ad[a - 1][b] < dis[a - 1][b])
		{
			dis[a - 1][b] = dis[a][b] + ad[a - 1][b];
			q.push(make_tuple(-dis[a - 1][b], a - 1, b));
		}
		if (b + 1 < n && dis[a][b] + ad[a][b + 1] < dis[a][b + 1])
		{
			dis[a][b + 1] = dis[a][b] + ad[a][b + 1];
			q.push(make_tuple(-dis[a][b + 1], a, b + 1));
		}
		if (b - 1 >= 0 && dis[a][b] + ad[a][b - 1] < dis[a][b - 1])
		{
			dis[a][b - 1] = dis[a][b] + ad[a][b - 1];
			q.push(make_tuple(-dis[a][b - 1], a, b - 1));
		}
	}
	return dis[n - 1][n - 1];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, cnt = 0;
	while (cin >> n)
	{
		if (n == 0)
			break;
		cnt++;
		vector<vector<int>> ad(n, vector<int>(n));
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				cin >> ad[i][j];
		cout << "Problem " << cnt << ": " << d(n, ad) << '\n';
	}
	return 0;
}