#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s, k;
	int n, cnt;
	cin >> s >> n;
	cnt = n;
	while (n--)
	{
		cin >> k;
		for (int i = 0; i < 5; i++)
			if (s[i] != k[i])
			{
				cnt--;
				break;
			}
	}
	cout << cnt;
	return 0;
}