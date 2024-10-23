#include <iostream>
#include <numeric>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long a, b;
	cin >> a >> b;
	long long k = gcd(a, b);
	for (int i = 0; i < k; i++)
		cout << 1;
}