#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c, d, e, f;
	int x, y;
	cin >> a >> b >> c >> d >> e >> f;
	x = (c * e - b * f) / (a * e - b * d);	
	y = (a * f - c * d) / (a * e - b * d);
	cout << x << ' ' << y;
}