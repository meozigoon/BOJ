#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int cnt = 1;
	int sc = 0;
	int a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 1)
		{
			sc += cnt;
			cnt++;
		}
		else
			cnt = 1;
	}
	cout << sc;
}