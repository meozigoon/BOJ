#include <iostream>

using namespace std;

long long ccw(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3)
{
	long long a = x1 * y2 + x2 * y3 + x3 * y1;
	long long b = y1 * x2 + y2 * x3 + y3 * x1;
	if (a - b < 0)
		return 1;
	else
		return -1;
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int x[4], y[4];
	for (int i = 0; i < 4; i++)
		cin >> x[i] >> y[i];
	long long abc = ccw(x[0], y[0], x[1], y[1], x[2], y[2]);
	long long abd = ccw(x[0], y[0], x[1], y[1], x[3], y[3]);
	long long cda = ccw(x[2], y[2], x[3], y[3], x[0], y[0]);
	long long cdb = ccw(x[2], y[2], x[3], y[3], x[1], y[1]);
	if (abc * abd <= 0 && cda * cdb <= 0)
		cout << 1;
	else
		cout << 0;
	return 0;
}