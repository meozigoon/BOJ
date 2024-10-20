#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, cnt = 0;
	cin >> n;
	string s;
	cin >> s;
	for (auto& i : s)
		if ((i - '0') % 2 == 0)
			cnt++;
	if (cnt > n - cnt)
		cout << 0;
	else if (cnt < n - cnt)
		cout << 1;
	else
		cout << -1;
	return 0;
}