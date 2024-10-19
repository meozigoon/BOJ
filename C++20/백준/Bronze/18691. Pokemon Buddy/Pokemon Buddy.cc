#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t, g, c, e;
	cin >> t;
	while (t--)
	{
		cin >> g >> c >> e;
		cout << (e > c ? (e - c) * (2 * g - 1) : 0) << '\n';
	}
	return 0;
}