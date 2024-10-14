#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	if (n == 1)
		cout << 0;
	else
		cout << 2 * pow(3, n - 2);
}