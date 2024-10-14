#include <iostream>

using namespace std;

int main(void)
{
	int  a, b;
	cin >> a >> b;
	unsigned long long ans = 1;
	for (int i = 1; i <= a; i++)
		ans = (ans * (i % b)) % b;
	cout << ans;
}