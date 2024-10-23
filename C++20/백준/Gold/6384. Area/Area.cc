#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

long long gcd(long long x, long long y)
{
	if (y)
		return gcd(y, x % y);
	return x;
}

struct p
{
	long long x;
	long long y;
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long b;
	double s;
	long long t;
	long long n;
	cin >> t;
	cout << fixed;
	cout.precision(1);
	int dx, dy;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		vector<p> pt(n);
		for (long long i = 0; i < n; i++)
		{
			cin >> dx >> dy;
			pt[i].x = (i > 0 ? (dx + pt[i - 1].x) : dx);
			pt[i].y = (i > 0 ? (dy + pt[i - 1].y) : dy);
		}
		s = 0;
		b = 0;
		for (long long i = 0; i < n; i++)
			s += pt[i].x * pt[(i + 1) % n].y;
		for (long long i = 0; i < n; i++)
			s -= pt[i].y * pt[(i + 1) % n].x;
		s = abs(s);
		for (long long i = 0; i < n; i++)
			b += gcd(abs(pt[(i + 1) % n].x - pt[i].x), abs(pt[(i + 1) % n].y - pt[i].y));
		cout << "Scenario #" << i + 1 << ":\n";
		cout << (int)((s - b + 2) / 2 > 0 ? (s - b + 2) / 2 : 0) << ' ' << b << ' ';
		cout << s / 2 << '\n' << '\n';
	}
	return 0;
}