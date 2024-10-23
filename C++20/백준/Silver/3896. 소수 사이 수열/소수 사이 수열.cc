#include <iostream>

using namespace std;

bool p[1299710];

int main(void)
{
	for (int i = 2; i < 1299709; i++)
		if (!p[i])
			for (int j = i + i; j < 1299709; j += i)
				p[j] = true;
	int t, k, tmp1, tmp2;
	cin >> t;
	while (t--)
	{
		cin >> k;
		for (int i = k; i <= 1299709; i++)
		{
			if (!p[i])
			{
				tmp1 = i;
				break;
			}
		}
		for (int i = k; i >= 2; i--)
		{
			if (!p[i])
			{
				tmp2 = i;
				break;
			}
		}
		cout << tmp1 - tmp2 << '\n';
	}
}