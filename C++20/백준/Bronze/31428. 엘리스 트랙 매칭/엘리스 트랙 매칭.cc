#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	vector<char> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	char c;
	cin >> c;
	int cnt = 0;
	for (auto& i : v)
		if (i == c)
			cnt++;
	cout << cnt;
	return 0;
}