#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
	int n, w, h;
	cin >> n >> w >> h;
	vector<int> m(n);
	for (int i = 0; i < n; i++)
	{
		cin >> m[i];
		if (m[i] <= w || m[i] <= h)
			cout << "DA" << '\n';
		else if (m[i] <= sqrt(w * w + h * h))
			cout << "DA" << '\n';
		else cout << "NE" << '\n';
	}
	return 0;
}