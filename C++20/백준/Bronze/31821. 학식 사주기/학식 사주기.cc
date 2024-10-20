#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int t, ans = 0, in;
	cin >> t;
	while (t--)
	{
		cin >> in;
		ans += a[in - 1];
	}
	cout << ans;
	return 0;
}