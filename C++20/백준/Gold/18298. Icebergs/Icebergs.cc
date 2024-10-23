#include <iostream>
#include <cmath>
#include <string>
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
	double S;
	double s = 0;
	int t, n;
	cin >> t;
	int x, y;
	while (t--)
	{
		cin >> n;
		vector<p> pt(n);
		for (long long i = 0; i < n; i++)
		{
			cin >> x >> y;
			pt[i].x = x;
			pt[i].y = y;
		}
		S = 0;
		b = 0;
		for (long long i = 0; i < n; i++)
			S += pt[i].x * pt[(i + 1) % n].y;
		for (long long i = 0; i < n; i++)
			S -= pt[i].y * pt[(i + 1) % n].x;
		S = abs(S);
		//for (long long i = 0; i < n; i++)
		//	b += gcd(abs(pt[(i + 1) % n].x - pt[i].x), abs(pt[(i + 1) % n].y - pt[i].y));
		//cout << (long long)((S - b + 2) / 2 > 0 ? (S - b + 2) / 2 : 0) + b << '\n';
		s += S;
	}
	cout << (long long) s / 2;
	return 0;
}