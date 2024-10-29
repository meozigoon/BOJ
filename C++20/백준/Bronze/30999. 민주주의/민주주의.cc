#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, p;
	cin >> n >> p;
	vector<string> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	int cnt, cntp = 0;
	for (auto& i : v)
	{
		cnt = 0;
		for (auto& j : i)
			if (j == 'O')
				cnt++;
		if (cnt >= (p + 1) / 2)
			cntp++;
	}
	cout << cntp;
	return 0;
}