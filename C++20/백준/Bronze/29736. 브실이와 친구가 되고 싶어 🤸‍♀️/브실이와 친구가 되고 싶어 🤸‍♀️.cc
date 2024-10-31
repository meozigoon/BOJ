#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int a, b, k, x;
	cin >> a >> b >> k >> x;
	if (a > k + x || b < k - x)
		cout << "IMPOSSIBLE";
	else
		cout << min(k + x, b) - max(k - x, a) + 1;
	return 0;
}