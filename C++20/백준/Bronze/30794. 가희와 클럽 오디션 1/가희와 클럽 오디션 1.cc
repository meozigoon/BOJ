#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int lv;
	string s;
	cin >> lv >> s;
	if (s == "miss")
		cout << 0;
	else if (s == "bad")
		cout << 200 * lv;
	else if (s == "cool")
		cout << 400 * lv;
	else if (s == "great")
		cout << 600 * lv;
	else
		cout << 1000 * lv;
	return 0;
}