#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	int tmp;
	int sum = 0;
	cin >> n;
	while (n--)
	{
		cin >> tmp;
		sum += tmp + 8;
	}
	sum -= 8;
	int d = sum / 24;
	int t = sum % 24;
	cout << d << ' ' << t;
}