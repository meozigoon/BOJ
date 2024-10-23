#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int n;
	bool chk = false;
	cin >> n;
	for (int i = 0; i <= 30; i++)
	{
		if (n == pow(2, i))
		{
			chk = true;
		}
	}
	if (chk == true)
		cout << 1;
	else
		cout << 0;
}