#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	double h, a, b;
	cin >> h >> b >> a;
	double k = h / sqrt(a * a + b * b);
	cout << floor(k * b) << ' ' << floor(k * a);
	return 0;
}