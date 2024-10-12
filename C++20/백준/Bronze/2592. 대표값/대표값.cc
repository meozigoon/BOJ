#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
	int cnt[101] = { 0, };
	int num[10];
	int avg = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
		avg += num[i];
	}
	cout << avg / 10 << '\n';
	for (int i = 1; i <= 10; i++)
	{
		cnt[num[i - 1] / 10]++;
	}
	int max = 0;
	for (int i = 1; i < 101; i++)
	{
		if (cnt[i] > cnt[max])
		{
			max = i;
		}
	}
	cout << max * 10;
}