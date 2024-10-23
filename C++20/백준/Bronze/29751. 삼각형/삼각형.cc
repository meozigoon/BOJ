#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	double a, h;
	cout << fixed;
	cout.precision(1);
	cin >> a >> h;
	cout << a * h / 2;
	return 0;
}