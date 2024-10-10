#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

int ccw(pair<long long, long long> a, pair<long long, long long> b, pair<long long, long long> c)
{
	long long s;
	s = a.first * b.second + b.first * c.second + c.first * a.second - a.second * b.first - b.second * c.first - c.second * a.first;
	if (s > 0)
		return 1;
	else if (s < 0)
		return -1;
	else
		return 0;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	vector<pair<long long, long long>> p(4);
	for (int i = 0; i < 4; i++)
		cin >> p[i].first >> p[i].second;
	int abcd = ccw(p[0], p[1], p[2]) * ccw(p[0], p[1], p[3]);
	int cdab = ccw(p[2], p[3], p[0]) * ccw(p[2], p[3], p[1]);
	if (abcd == 0 && cdab == 0)
	{
		if (p[0] > p[1])
			swap(p[0], p[1]);
		if (p[2] > p[3])
			swap(p[2], p[3]);
		if (p[1] >= p[2] && p[0] <= p[3])
			cout << 1;
		else
			cout << 0;
	}
	else if (abcd <= 0 && cdab <= 0)
		cout << 1;
	else
		cout << 0;
	return 0;
}