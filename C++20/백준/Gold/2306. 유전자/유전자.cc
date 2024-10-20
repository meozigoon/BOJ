#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s;
int dp[500][500];

int f(int l, int r)
{
	if (l >= r)
		return 0;
	int& a = dp[l][r];
	if (a != -1)
		return a;
	int ans = -1;
	for (int i = l; i < r; i++)
		ans = max(ans, f(l, i) + f(i + 1, r));
	if ((s[l] == 'a' && s[r] == 't') || (s[l] == 'g' && s[r] == 'c'))
		ans = max(ans, f(l + 1, r - 1) + 2);
	return a = ans;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	for (int i = 0; i < 500; i++)
		for (int j = 0; j < 500; j++)
			dp[i][j]--;
	cin >> s;
	cout << f(0, s.length() - 1);
	return 0;
}