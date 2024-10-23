#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	string s;
	while (t--)
	{
		cin >> s;
		switch (s[0])
		{
		case 'A':
			if (s[1] == 'l')
				cout << 204 << '\n';
			else
				cout << 302 << '\n';
			break;
		case 'D':
			cout << 207 << '\n';
			break;
		case 'C':
			cout << "B101\n";
			break;
		case 'N':
			cout << 303 << '\n';
			break;
		case 'S':
			cout << 501 << '\n';
			break;
		case 'T':
			cout << 105 << '\n';
			break;
		}
	}
	return 0;
}