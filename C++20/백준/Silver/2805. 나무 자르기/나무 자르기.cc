#include <iostream>

using namespace std;

long long t[1000001];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	long long m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> t[i];
	int l = 0, r = 1000000000;
	int mid, ans;
	bool ch = false;
	int get;
	while (l <= r)
	{
		mid = (l + r) / 2;
		get = 0;
		ch = false;
		for (int i = 0; i < n; i++)
		{
			if (t[i] >= mid)
				get += (t[i] - mid);
			if (get >= m)
			{
				ch = true;
				break;
			}
		}
		if (ch)
		{
			ans = mid;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	cout << ans << '\n';
}