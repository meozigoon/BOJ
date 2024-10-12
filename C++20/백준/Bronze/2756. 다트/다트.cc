#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>
#include <cmath>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	int n, m;
	long double x, y, d;
	while (t--)
	{
		n = 0;
		m = 0;
		for (int i = 0; i < 3; i++)
		{
			cin >> x >> y;
			d = sqrt(x * x + y * y);
			if (d <= 3)
				n += 100;
			else if (d <= 6)
				n += 80;
			else if (d <= 9)
				n += 60;
			else if (d <= 12)
				n += 40;
			else if (d <= 15)
				n += 20;
		}
		for (int i = 0; i < 3; i++)
		{
			cin >> x >> y;
			d = sqrt(x * x + y * y);
			if (d <= 3)
				m += 100;
			else if (d <= 6)
				m += 80;
			else if (d <= 9)
				m += 60;
			else if (d <= 12)
				m += 40;
			else if (d <= 15)
				m += 20;
		}
		if (n > m)
			cout << "SCORE: " << n << " to " << m << ", PLAYER 1 WINS.\n";
		else if (n < m)
			cout << "SCORE: " << n << " to " << m << ", PLAYER 2 WINS.\n";
		else
			cout << "SCORE: " << n << " to " << m << ", TIE.\n";
	}
	return 0;
}