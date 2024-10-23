#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	double d, f, p;
	int t;
	cin >> t;
	cout.precision(2);
	cout << fixed;
	while (t--)
	{
		cin >> d >> f >> p;
		cout << '$' << d * f * p << '\n';
	}
}