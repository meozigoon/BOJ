#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
	char c;
	string s;
	int cnt;
	while (1)
	{
		cin >> c;
		if (c == '#')
			break;
		cnt = 0;
		getline(cin, s, '\n');
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == c || s[i] == c - ('a' - 'A'))
				cnt++;
		}
		cout << c << ' ' << cnt << '\n';
	}
}