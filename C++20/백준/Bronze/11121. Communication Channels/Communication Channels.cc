#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	string s1, s2;
	while (t--)
	{
		cin >> s1 >> s2;
		if (s1 == s2)
			cout << "OK\n";
		else
			cout << "ERROR\n";
	}
	return 0;
}