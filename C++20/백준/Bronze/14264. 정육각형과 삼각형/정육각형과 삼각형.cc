#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	double l;
	cin >> l;
	printf("%.10lf\n", l * l * sqrt(3) / 4);
	return 0;
}