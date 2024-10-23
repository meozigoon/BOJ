#include <iostream>

using namespace std;

int main(void)
{
	int v, w; long long d;
	cin >> v >> w >> d;
	double t = w / (double)v;
	t =5* t * t;
	double s = 0;
	int cnt = 0;
	while (s < d)
	{
		
		s += t;
		t *= 25 / 16.0;
		cnt++;
	}
	cout << --cnt;
	return 0;
}