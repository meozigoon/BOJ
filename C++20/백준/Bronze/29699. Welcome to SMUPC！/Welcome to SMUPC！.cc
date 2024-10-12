#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s = "WelcomeToSMUPC";
	int n;
	cin >> n;
	cout << s[(n - 1) % 14];
	return 0;
}