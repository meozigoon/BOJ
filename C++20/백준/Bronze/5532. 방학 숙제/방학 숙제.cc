#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	double l, a, b, c, d;
	cin >> l;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	int sum = l;
	sum -= (int)max(ceil(a / c), ceil(b / d));
	cout << sum;
	return 0;
}