#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, b, e;
	vector<pair<int, int>> s;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> b >> e;
		s.push_back(make_pair(e, b));
	}
	sort(s.begin(), s.end());
	int t = s[0].first;
	int cnt = 1;
	for (int i = 1; i < n; i++)
	{
		if (t <= s[i].second)
		{
			cnt++;
			t = s[i].first;
		}
	}
	cout << cnt;
}