#include <iostream>

using namespace std;

unsigned long long arr[51];

unsigned long long dp(int n)
{
	if (arr[n] == 0)
		arr[n] = (dp(n - 2) + dp(n - 1) + 1) % 1000000007;
	return arr[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	arr[0] = 1;
	arr[1] = 1;
	cout << dp(n);
}