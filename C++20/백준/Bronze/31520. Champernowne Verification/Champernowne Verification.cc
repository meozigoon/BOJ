#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	string s;
	cin >> s;
	bool ch = true;
	for (int i = 0; i < s.length(); i++)
	{
		if (i + 1 != s[i] - '0')
		{
			cout << -1;
			ch = false;
			break;
		}
	}
	if (ch)
		cout << s.length();
	return 0;
}