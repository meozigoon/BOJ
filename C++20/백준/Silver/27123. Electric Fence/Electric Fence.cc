#include <iostream>
#include <cmath>

using namespace std;

int gcd(int x, int y)
{
	if (y)
		return gcd(y, x % y);
	return x;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int x1, y1, x2, y2, x3, y3;
	int s, b;
	int t;
	x1 = 0;
	y1 = 0;
	y3 = 0;
	cin >> x2 >> y2 >> x3;
	s = abs(x1 * y2 + x2 * y3 + x3 * y1 - x1 * y3 - x2 * y1 - x3 * y2);
	b = gcd(abs(x2 - x1), abs(y2 - y1)) + gcd(abs(x3 - x2), abs(y3 - y2)) + gcd(abs(x3 - x1), abs(y3 - y1));
	cout << ((s - b + 2) / 2 > 0 ? (s - b + 2) / 2 : 0) << '\n';
	return 0;
}