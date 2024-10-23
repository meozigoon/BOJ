#include<iostream>
#define PI 3.1415926535897932

using namespace std;

int main(void)
{
	double r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << r * r * PI << '\n' << r * r * 2;
	return 0;
}