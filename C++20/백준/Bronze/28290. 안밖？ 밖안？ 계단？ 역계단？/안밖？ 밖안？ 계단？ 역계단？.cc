#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	string s;
	cin >> s;
	if (s == "asdfjkl;")
		cout << "stairs";
	else if (s == ";lkjfdsa")
		cout << "reverse";
	else if (s == "asdf;lkj" || s == ";lkjasdf")
		cout << "out-in";
	else if (s == "fdsajkl;" || s == "jkl;fdsa")
		cout << "in-out";
	else
		cout << "molu";
	return 0;
}