#include <iostream>

using namespace std;

int arr[1001];

int dp(int n)
{
	if (arr[n] != 0)
		return arr[n];
	arr[n] = dp(n - 1) + dp(n - 2);
	arr[n] %= 10007;
	return arr[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 3;
	cout << dp(n);
}