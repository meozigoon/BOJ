#include <iostream>
using namespace std;
int cnt[10000]; // 0~9999

int main(void) {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		cnt[k - 1]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < cnt[i]; j++)
		{
			cout << i + 1 << "\n";
		}
	}
	return 0;
}