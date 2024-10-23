#include<iostream>

using namespace std;

int main(void)
{
	int x[3], y[3];
	int out[2];
	cin >> x[0] >> y[0];
	cin >> x[1] >> y[1];
	cin >> x[2] >> y[2];
	if (x[0] == x[1]) out[0] = 2;
	else if (x[2] == x[1]) out[0] = 0;
	else if (x[2] == x[0]) out[0] = 1;
	if (y[0] == y[1]) out[1] = 2;
	else if (y[2] == y[1]) out[1] = 0;
	else if (y[2] == y[0]) out[1] = 1;
	cout << x[out[0]] << ' ' << y[out[1]];
	return 0;
}