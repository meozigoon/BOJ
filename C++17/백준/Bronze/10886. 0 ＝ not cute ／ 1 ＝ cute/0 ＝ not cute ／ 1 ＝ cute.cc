#include <iostream>

using namespace std;

int main()
{
	int n, c, nc, tmp;
	cin >> n;
	c = 0;
	nc = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		if (tmp == 1) c++;
		else nc++;
	}
	if (c > nc) cout << "Junhee is cute!";
	else cout << "Junhee is not cute!";
	return 0;
}