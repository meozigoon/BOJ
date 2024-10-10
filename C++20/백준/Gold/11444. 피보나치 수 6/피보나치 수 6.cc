#include <iostream>
#include <vector>

using namespace std;

long long n;
vector<vector<long long>> a = { {1, 1}, {1, 0} };
vector<vector<long long>> ans = { {1, 0}, {0, 1} };

vector<vector<long long>> cal (vector<vector<long long>>& a, vector<vector<long long>>& b) {
	vector<vector<long long>> c = { {0, 0}, {0, 0} };
	for (int i = 0; i < 2; i++)
    {
		for (int j = 0; j < 2; j++)
        {
			for (int k = 0; k < 2; k++) 
				c[i][j] += a[i][k] * b[k][j];
			c[i][j] = c[i][j] % 1000000007;
		}
	}
	return c;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cin >> n;
	while (n > 0)
    {
		if ((n & 1) == 1)
          ans = cal(ans, a);
		a = cal(a, a);
		n = n >> 1;
	}
	cout << ans[0][1];
	return 0;
}