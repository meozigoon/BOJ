#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int n, x;
	cin >> n >> x;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int ans = 2147483647;
	for (int i = 0; i < n - 1; i++)
		ans = min(ans, v[i] + v[i + 1]);
	cout << ans * x;
	return 0;
}