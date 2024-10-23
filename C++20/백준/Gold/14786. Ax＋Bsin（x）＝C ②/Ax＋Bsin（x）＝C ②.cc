#include <iostream>
#include <algorithm>
#include <cmath>


using namespace std;

int a, b, c;

double f(double x)
{
	return (a * x + b * sin(x) - c);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	cout.precision(12);
	cout << fixed;
	cin >> a >> b >> c;
	double d = 0;
	for (double i = 1; i >= 0.0000000000001; i /= 10.0)
	{
		for (int j = 0; 1; j++)
		{
			if (f(d + j * i) > 0)
			{
				d += (j - 1) * i;
				break;
			}
		}
	}
	cout << d;
}