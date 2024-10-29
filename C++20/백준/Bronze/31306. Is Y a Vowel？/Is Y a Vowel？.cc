#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s;
	cin >> s;
	int cnt = 0, cnty = 0;
	for (auto& i : s)
	{
		if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
			cnt++;
		if (i == 'y')
			cnty++;
	}
	cout << cnt << ' ' << cnt + cnty;
	return 0;
}