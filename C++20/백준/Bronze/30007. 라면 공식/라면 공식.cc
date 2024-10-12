#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a, b, x, t;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> x;
		cout << b + a * (x - 1) << '\n';
	}
	return 0;
}