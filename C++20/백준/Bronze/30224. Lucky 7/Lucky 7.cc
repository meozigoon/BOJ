#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	int tmp = n;
	bool b = false;
	while (tmp > 1)
	{
		if (tmp % 10 == 7)
		{
			b = true;
			break;
		}
		else
			tmp /= 10;
	}
	if (n % 7 == 0)
	{
		if (b)
			cout << 3;
		else
			cout << 1;
	}
	else
	{
		if (b)
			cout << 2;
		else
			cout << 0;
	}
	return 0;
}