#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s;
	cin >> s;
	bool ch[5] = { false, };
	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
		case 'M':
			ch[0] = true;
			break;
		case 'O':
			ch[1] = true;
			break;
		case 'B':
			ch[2] = true;
			break;
		case 'I':
			ch[3] = true;
			break;
		case 'S':
			ch[4] = true;
			break;
		}
	}
	if (ch[0] && ch[1] && ch[2] && ch[3] && ch[4])
		cout << "YES";
	else
		cout << "NO";
}