#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int n;
	int a, b;
	cin >> n;
	if (n / 1000 == 1)
	{
		a = 10;
		b = 10;
	}
	else if (n / 100 >= 1 && n % 10 == 0)
	{
		b = 10;
		a = n / 100;
	}
	else if (n / 100 == 1 && n % 10 != 0)
	{
		a = 10;
		b = n % 100;
	}
	else
	{
		a = n / 10;
		b = n % 10;
	}
	cout << a + b;
}