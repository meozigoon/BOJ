#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string s, m;
	int a, ma = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> s >> a;
		if (ma < a)
		{
			ma = a;
			m = s;
		}
	}
	cout << m;
	return 0;
}