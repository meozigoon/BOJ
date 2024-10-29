#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s;
	getline(cin, s);
	if (s[0] == '"' && s[s.length() - 1] == '"' && s.length() > 2)
		for (int i = 1; i < s.length() - 1; i++)
			cout << s[i];
	else
		cout << "CE";
	return 0;
}