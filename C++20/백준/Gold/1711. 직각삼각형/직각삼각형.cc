#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct pt
{
	long long x;
	long long y;
};

long long d(pt a, pt b)
{
	return ((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

bool rt(pt a, pt b, pt c)
{
	if (d(a, b) == d(b, c) + d(a, c))
		return true;
	if (d(b, c) == d(a, b) + d(a, c))
		return true;
	if (d(a, c) == d(a, b) + d(b, c))
		return true;
	else
		return false;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long n;
	cin >> n;
	long long cnt = 0;
	vector<pt> p(n);
	for (long long i = 0; i < n; i++)
		cin >> p[i].x >> p[i].y;
	for (long long i = 0; i < n - 2; i++)
		for (long long j = i + 1; j < n - 1; j++)
			for (long long k = j + 1; k < n; k++)
				if (rt(p[i], p[j], p[k]))
					cnt++;
	cout << cnt;
	return 0;
}