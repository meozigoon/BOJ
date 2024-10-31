#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, r, c, m = 0;
	cin >> n;
	while (n--)
	{
		cin >> r >> c;
		if (r == 136)
			m += 1000;
		else if (r == 142)
			m += 5000;
		else if (r == 148)
			m += 10000;
		else if (r == 154)
			m += 50000;
	}
	cout << m;
	return 0;
}