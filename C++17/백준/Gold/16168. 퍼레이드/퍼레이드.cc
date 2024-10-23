#include <iostream>
#include<vector>

using namespace std;

int v, e;
bool check;
int vis[3001][3001];
vector<pair<int, int>> nord;

void dfs(int V, int id, int cnt)
{
	if (cnt == e)
	{
		check = true;
		return;
	}

	for (int i = 0; i < e; i++)
	{
		if (nord[i].first == V)
		{
			if (vis[V][nord[i].second] != id)
			{
				vis[V][nord[i].second] = id;
				vis[nord[i].second][V] = id;
				dfs(nord[i].second, id, cnt + 1);
			}
		}
		else if (nord[i].second == V)
		{
			if (vis[V][nord[i].first] != id)
			{
				vis[V][nord[i].first] = id;
				vis[nord[i].first][V] = id;
				dfs(nord[i].first, id, cnt + 1);
			}
		}
	}
	return;
}

int main()
{
	cin >> v >> e;
	pair<int, int> tmp;
	for (int i = 0; i < e; i++)
	{
		cin >> tmp.first >> tmp.second;
		nord.push_back(tmp);
	}

	for (int i = 1; i <= v; i++)
	{
		dfs(i, i, 0);
		if (check)break;
	} 
	if (check) cout << "YES";
	else
	{
		cout << "NO";
	}
	return 0;
}