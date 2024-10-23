#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int* stick = new int[n];
	int max;
	int cnt = 1;
	for (int i = 0; i < n; i++)
	{
		cin >> stick[i];
	}
	max = stick[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		if (stick[i] > max)
		{
			max = stick[i];
			cnt++;
		}
	}
	cout << cnt;
}