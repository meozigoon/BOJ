#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int i)
{
	int rt;
	rt = sqrt(i);
	if (rt == 1 && i != 1)
		return true;
	if (i % 2)
    {
		for (int j = 2; j <= rt; j++)
        {
			if (!(i % j))
				return false;
			if (j == rt)
				return true;
		}
	}
}

int main(void)
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
    {
		int n;
		cin >> n;
		for (int j = n / 2; j >= 2; j--) {
			if (isPrime(j) && isPrime(n - j)) {
				cout << j << " " << n - j << '\n';
				break;
			}
		}
	}
}