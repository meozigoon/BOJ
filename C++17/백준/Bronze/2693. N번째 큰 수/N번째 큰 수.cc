#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int cnt[10000]; // 0~9999

int main(void) {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		vector<int>a(10);
		for (int j = 0; j < 10; j++)
		{
			cin >> a[j];
		}
		sort(a.begin(), a.end());
		cout << a[7] << '\n';
	}
	return 0;
}