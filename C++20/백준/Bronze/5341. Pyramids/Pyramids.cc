#include <iostream>

using namespace std;

int main(void)
{
	int n = 1;
	int sum;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		sum = 0;
		for (int i = 1; i <= n; i++)
		{
			sum += i;
		}
		cout << sum << '\n';
	}
}