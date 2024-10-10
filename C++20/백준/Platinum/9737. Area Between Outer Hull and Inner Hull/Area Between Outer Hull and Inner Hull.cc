#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <stack>
#include <map>
#include <numeric>
#include <cmath>
#include <string>

using namespace std;

int ccw(pair<long double, long double> a, pair<long double, long double> b, pair<long double, long double> c)
{
	long double s;
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
	string s;
	long double s1, s2;
	cout << fixed;
	cout.precision(4);
	while(1)
	{
		cin >> s >> n;
		if (!n)
			break;
		s1 = 0, s2 = 0;
		vector<pair<long double, long double>> p(n);
		vector<pair<long double, long double>> p2;
		vector<pair<long double, long double>> u;
		vector<pair<long double, long double>> l;
		for (int i = 0; i < n; i++)
		{
			cin >> p[i].first >> p[i].second;
		}
		sort(p.begin(), p.end());
		u.push_back(p[0]);
		u.push_back(p[1]);
		l.push_back(p[n - 1]);
		l.push_back(p[n - 2]);
		for (int i = 2; i < n; i++)
		{
			for (int j = u.size(); j >= 2 && ccw(u[j - 2], u[j - 1], p[i]) != 1; j--)
			{
				u.pop_back();
			}
			u.push_back(p[i]);
		}
		for (int i = p.size() - 3; i >= 0; i--)
		{
			for (int j = l.size(); j >= 2 && ccw(l[j - 2], l[j - 1], p[i]) != 1; j--)
			{
				l.pop_back();
			}
			l.push_back(p[i]);
		}
		reverse(l.begin(), l.end());
		for (int i = u.size() - 2; i >= 1; i--)
			l.push_back(u[i]);
		for (int i = 0; i < l.size() - 1; i++)
			s1 += l[i].first * l[i + 1].second - l[i].second * l[i + 1].first;
		s1 += l[l.size() - 1].first * l[0].second - l[l.size() - 1].second * l[0].first;
		for (auto& i : p)
			if (find(l.begin(), l.end(), i) == l.end())
				p2.push_back(i);
		u.clear();
		l.clear();
		u.push_back(p2[0]);
		u.push_back(p2[1]);
		l.push_back(p2[p2.size() - 1]);
		l.push_back(p2[p2.size() - 2]);
		for (int i = 2; i < p2.size(); i++)
		{
			for (int j = u.size(); j >= 2 && ccw(u[j - 2], u[j - 1], p2[i]) != 1; j--)
			{
				u.pop_back();
			}
			u.push_back(p2[i]);
		}
		for (int i = p2.size() - 3; i >= 0; i--)
		{
			for (int j = l.size(); j >= 2 && ccw(l[j - 2], l[j - 1], p2[i]) != 1; j--)
			{
				l.pop_back();
			}
			l.push_back(p2[i]);
		}
		reverse(l.begin(), l.end());
		for (int i = u.size() - 2; i >= 1; i--)
			l.push_back(u[i]);
		for (int i = 0; i < l.size() - 1; i++)
			s2 += l[i].first * l[i + 1].second - l[i].second * l[i + 1].first;
		s2 += l[l.size() - 1].first * l[0].second - l[l.size() - 1].second * l[0].first;
		cout << "ProblemID " << s << ": " << (fabs(s1) - fabs(s2)) / 2 << '\n';
	}
	return 0;
}