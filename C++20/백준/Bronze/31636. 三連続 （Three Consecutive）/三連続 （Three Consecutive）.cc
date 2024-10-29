#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	string s;
	bool ch = true;
	cin >> n >> s;
	if (n < 3)
		cout << "No";
	else
	{
		for (int i = 0; i < n - 2; i++)
			if (s[i] == 'o' && s[i + 1] == 'o' && s[i + 2] == 'o')
			{
				cout << "Yes";
				ch = false;
				break;
			}
		if (ch)
			cout << "No";
	}
	return 0;
}