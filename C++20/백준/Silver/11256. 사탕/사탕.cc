#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int t;
	cin >> t;
	int c, b;
	int v, h;
	int cnt = 0;
	for (int i = 0; i < t; i++)
	{
		cin >> c >> b;
		vector<int> s(b);
		for (int j = 0; j < b; j++)
		{
			cin >> v >> h;
			s[j] = v * h;
		}
		sort(s.begin(), s.end(), greater<>());
		cnt = 0;
		for (int j = 0; j < b; j++)
		{
			c -= s[cnt];
			cnt++;
			if (c <= 0)
				break;
		}
		cout << cnt << '\n';
	}
}