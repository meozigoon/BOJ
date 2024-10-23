#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
	int num[3];
	char c[3];
	cin >> num[0] >> num[1] >> num[2];
	sort(num, num + 3);
	cin >> c[0] >> c[1] >> c[2];
	cout << num[c[0] - 65] << ' ' << num[c[1] - 65] << ' ' << num[c[2] - 65];
}