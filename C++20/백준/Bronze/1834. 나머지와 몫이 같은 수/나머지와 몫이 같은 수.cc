#include <iostream>

using namespace std;

int main(void)
{
	unsigned long long n;
	cin >> n;
	unsigned long long sum = 0;
	for (int i = 1; i < n; i++)
	{
		sum += n * i + i;
	}
	cout << sum;
}