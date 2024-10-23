#include <iostream>

using namespace std;

int v(int n, int m)
{
	int ans = 0;
	while (n >= m)
    {
		ans += n / m;
		n /= m;
	}
	return ans;
}

int main(void)
{
	ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	cout << min(v(n, 2) - v(m, 2) - v(n - m, 2), v(n, 5) - v(m, 5) - v(n - m, 5));
	return 0;
}