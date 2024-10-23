#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a, b;
	cin >> a >> b;
	if (a > 19)
		cout << 24 - a + b;
	else
		cout << b - a;

	return 0;
}