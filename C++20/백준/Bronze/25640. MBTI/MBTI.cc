#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s;
	string tmp;
	int n;
	cin >> s >> n;
	int cnt = 0;
	while (n--)
	{
		cin >> tmp;
		if (s == tmp)
			cnt++;
	}
	cout << cnt;
}