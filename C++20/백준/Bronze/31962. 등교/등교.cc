#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, x, s, t, ma = 0;
	bool ch = false;
	cin >> n >> x;
	while (n--)
	{
		cin >> s >> t;
		if (s + t <= x && ma < s)
		{
			ma = s;
			ch = true;
		}
	}
	if (ch)
		cout << ma;
	else
		cout << -1;
	return 0;
}