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
	vector<char> v;
	v.push_back(s[0]);
	for (int i = 1; i < s.length(); i++)
		if (s[i] != s[i - 1])
			v.push_back(s[i]);
	for (auto& i : v)
		cout << i;
	return 0;
}