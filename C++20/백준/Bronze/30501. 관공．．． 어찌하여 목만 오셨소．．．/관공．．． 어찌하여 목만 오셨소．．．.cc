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
	cin >> n;
	while (n--)
	{
		cin >> s;
		for (auto& i : s)
			if (i == 'S')
				cout << s;
	}
	return 0;
}