#include <iostream>
#include <string>

using namespace std;

int dp[5001];

int d(string s, int n)
{
	if (s[0] == '0')
		return 0;
	int tmp;
	dp[0] = dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		if (s[i - 1] != '0')
			dp[i] = dp[i - 1] % 1000000;
		tmp = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
		if (tmp >= 10 && tmp <= 26)
			dp[i] = (dp[i] + dp[i - 2]) % 1000000;
	}
	return dp[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s;
	cin >> s;
	cout << d(s, s.length());
	return 0;
}