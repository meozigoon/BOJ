#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int n[5];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> n[i];
		sum += n[i];
	}
	cout << sum / 5 << '\n';
	sort(n, n + 5);
	cout << n[2];
	return 0;
}