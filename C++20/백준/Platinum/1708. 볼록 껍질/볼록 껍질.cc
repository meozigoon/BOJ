#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <numeric>

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
	int n;
	cin >> n;
	vector<pair<long long, long long>> p(n);
	vector<pair<long long, long long>> u;
	vector<pair<long long, long long>> l;
	for (int i = 0; i < n; i++)
		cin >> p[i].first >> p[i].second;
	sort(p.begin(), p.end());
	u.push_back(p[0]);
	u.push_back(p[1]);
	l.push_back(p[n - 1]);
	l.push_back(p[n - 2]);
	for (int i = 2; i < n; i++)
	{
		for (int j = u.size(); j >= 2 && ccw(u[j - 2], u[j - 1], p[i]) != 1; j--)
			u.pop_back();
		u.push_back(p[i]);
	}
	for (int i = p.size() - 3; i >= 0; i--)
	{
		for (int j = l.size(); j >= 2 && ccw(l[j - 2], l[j - 1], p[i]) != 1; j--)
			l.pop_back();
		l.push_back(p[i]);
	}
	reverse(l.begin(), l.end());
	for (int i = u.size() - 2; i >= 1; i--)
		l.push_back(u[i]);
	cout << l.size();
	return 0;
}