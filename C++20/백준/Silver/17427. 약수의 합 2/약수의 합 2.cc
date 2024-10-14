#include <iostream>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 1; i <= n; i++)
		sum += (n / i) * i;
	cout << sum;
}