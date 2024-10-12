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
	string s;
	long long dx, dy;
	while (cin >> s)
	{
		vector<p> pt(s.length());
		for (long long i = 0; i < s.length(); i++)
		{
			switch (s[i])
			{
			case '1':
				dx = 1;
				dy = 1;
				break;
			case '2':
				dx = 0;
				dy = 1;
				break;
			case '3':
				dx = -1;
				dy = 1;
				break;
			case '4':
				dx = -1;
				dy = 0;
				break;
			case '5':
				dx = -1;
				dy = -1;
				break;
			case '6':
				dx = 0;
				dy = -1;
				break;
			case '7':
				dx = 1;
				dy = -1;
				break;
			case '0':
				dx = 1;
				dy = 0;
				break;
			}
			pt[i].x = (i > 0 ? (dx + pt[i - 1].x) : dx);
			pt[i].y = (i > 0 ? (dy + pt[i - 1].y) : dy);
		}
		S = 0;
		b = 0;
		for (long long i = 0; i < s.length(); i++)
			S += pt[i].x * pt[(i + 1) % s.length()].y;
		for (long long i = 0; i < s.length(); i++)
			S -= pt[i].y * pt[(i + 1) % s.length()].x;
		S = abs(S);
		for (long long i = 0; i < s.length(); i++)
			b += gcd(abs(pt[(i + 1) % s.length()].x - pt[i].x), abs(pt[(i + 1) % s.length()].y - pt[i].y));
		cout << (long long)((S - b + 2) / 2 > 0 ? (S - b + 2) / 2 : 0) + b << '\n';
	}
	return 0;
}