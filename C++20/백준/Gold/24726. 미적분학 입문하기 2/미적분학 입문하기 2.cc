#include <iostream>
#include <cmath>
#include <queue>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	double x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double s = abs(x1 * y2 + x2 * y3 + x3 * y1 - y1 * x2 - y2 * x3 - y3 * x1);
	cout << fixed;
	cout.precision(7);
	cout << (y1 + y2 + y3) / 3 * 3.14159265 * s << ' ' << (x1 + x2 + x3) / 3 * 3.14159265 * s;
	return 0;
}