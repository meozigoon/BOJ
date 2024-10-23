#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s[7] = {
		"Never gonna give you up",
		"Never gonna let you down",
		"Never gonna run around and desert you",
		"Never gonna make you cry",
		"Never gonna say goodbye",
		"Never gonna tell a lie and hurt you",
		"Never gonna stop"
	};
	int n;
	cin >> n;
	string tmp;
	bool b = false;
	cin.ignore();
	while (n--)
	{
		getline(cin, tmp);
		for (int i = 0; i < 7; i++)
		{
			if (s[i] == tmp)
				break;
			if (i == 6)
			{
				cout << "Yes";
				return 0;
			}
		}
	}
	cout << "No";
	return 0;
}