#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	int sum = n * (n + 1) / 2;
	cout << sum << '\n' << sum * sum << '\n' << sum * sum;
	return 0;
}