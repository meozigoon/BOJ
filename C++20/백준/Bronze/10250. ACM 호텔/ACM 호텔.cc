#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
	int h, w, n, t;
	int ans;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		if (n % h == 0)
		{
			ans = h * 100 + n / h;
		}
		else
		{
			ans = (n % h) * 100 + n / h + 1;
		}
		cout << ans << endl;
	}
}