#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m;
	cin >> n;
	vector<int> v1(n);
	for (int i = 0; i < n; i++)
		cin >> v1[i];
	cin >> m;
	vector<int> v2(m);
	for (int i = 0; i < m; i++)
		cin >> v2[i];
	long long ans = 1;
	int g;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			g = gcd(v1[i], v2[j]);
			ans *= g;
			if (ans >= 1000000000)
			{
				cout.width(9);
		        cout.fill('0');
				ans %= 1000000000;
			}
			v1[i] /= g;
			v2[j] /= g;
		}
	cout << ans;
}