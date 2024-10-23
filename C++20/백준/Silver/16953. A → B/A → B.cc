#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a, b, cnt = 0;
	cin >> a >> b;
	while (a != b)
	{
		if (b <= 0)
		{
			cnt = -2;
			break;
		}
		else if (b % 10 == 1)
		{
			b = (b - 1) / 10;
			cnt++;
		}
		else if (b % 2 == 0)
		{
			b /= 2;
			cnt++;
		}
		else
		{
			cnt = -2;
			break;
		}
	}
	cout << cnt + 1;
	return 0;
}