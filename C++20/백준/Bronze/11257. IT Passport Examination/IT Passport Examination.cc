#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t, n;
	int a, b, c;
	cin >> t;
	while (t--)
	{
		cin >> n >> a >> b >> c;
		cout << n << ' ' << a + b + c << ' ';
		if (a + b + c >= 55 && a >= 11 && b >= 8 && c >= 12)
			cout << "PASS\n";
		else
			cout << "FAIL\n";
	}
	return 0;
}