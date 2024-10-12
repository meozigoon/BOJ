#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	int n;
	string a, b;
	int ans;
	while (t--)
	{
		map<string, int> m;
		cin >> n;
		ans = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			if (m.find(b) == m.end())
				m.insert({ b, 1 });
			else
				m[b]++;
		}
		for (auto i : m)
			ans *= (i.second + 1);
		ans--;
		cout << ans << '\n';
	}
}