#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long s;
	cin >> s;
	long long sum = 0, num = 1;
	int cnt = 0;
	while (1)
	{
		sum += num;
		cnt++;
		if (sum > s)
		{
			cnt--;
			break;
		}
		num++;
	}
	cout << cnt;
}
