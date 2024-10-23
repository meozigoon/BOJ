#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
    long double n;
	cin >> n;
	cout << fixed;
	cout.precision(2);
	cout << n / 4;
}