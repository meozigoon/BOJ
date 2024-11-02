#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	long long n;
	cin >> n;
	long long ans = 6;
	for (int i = 11; i <= n; i++)
		ans *= i;
	cout << ans;
	return 0;
}