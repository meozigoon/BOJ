#include<iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b + c != 180) cout << "Error";
	else
	{
		if (a == b && b == c && a == c) cout << "Equilateral";
		else if (a != b && b != c && a != c) cout << "Scalene";
		else cout << "Isosceles";
	}
	return 0;
}