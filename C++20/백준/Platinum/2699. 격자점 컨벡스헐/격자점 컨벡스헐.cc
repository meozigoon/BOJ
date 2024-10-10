#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <numeric>

using namespace std;

long long ccw(pair<long long, long long> a, pair<long long, long long> b, pair<long long, long long> c)
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
	long long n, t;
	long long ma, mai;
	cin >> t;
	while (t--)
	{
		cin >> n;
		ma = 0;
		vector<pair<long long, long long>> p(n);
		vector<pair<long long, long long>> u;
		vector<pair<long long, long long>> l;
		for (long long i = 0; i < n; i++)
			cin >> p[i].first >> p[i].second;
		sort(p.begin(), p.end());
		u.push_back(p[0]);
		u.push_back(p[1]);
		l.push_back(p[n - 1]);
		l.push_back(p[n - 2]);
		for (long long i = 2; i < n; i++)
		{
			for (long long j = u.size(); j >= 2 && ccw(u[j - 2], u[j - 1], p[i]) != 1; j--)
				u.pop_back();
			u.push_back(p[i]);
		}
		for (long long i = p.size() - 3; i >= 0; i--)
		{
			for (long long j = l.size(); j >= 2 && ccw(l[j - 2], l[j - 1], p[i]) != 1; j--)
				l.pop_back();
			l.push_back(p[i]);
		}
		reverse(u.begin(), u.end());
		for (long long i = l.size() - 2; i >= 1; i--)
			u.push_back(l[i]);
		cout << u.size() << '\n';
		for (int i = 0; i < u.size(); i++)
		{
			if (u[i].second > ma)
			{
				ma = u[i].second;
				mai = i;
			}
			else if (u[i].second == ma)
			{
				if (u[i].first < u[mai].first)
					mai = i;
			}
		}
		for (int i = mai; i < u.size(); i++)
			cout << u[i].first << ' ' << u[i].second << '\n';
		for (int i = 0; i < mai; i++)
			cout << u[i].first << ' ' << u[i].second << '\n';
	}
	return 0;
}