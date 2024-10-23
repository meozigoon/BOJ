#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n[3][4];
	int sum;
	for (int i = 0; i < 3; i++)
	{
		cin >> n[i][0] >> n[i][1] >> n[i][2] >> n[i][3];
		sum = n[i][0] + n[i][1] + n[i][2] + n[i][3];
		switch (sum)
		{
		case 0:
			cout << 'D' << '\n';
			break;
		case 1:
			cout << 'C' << '\n';
			break;
		case 2:
			cout << 'B' << '\n';
			break;
		case 3:
			cout << 'A' << '\n';
			break;
		case 4:
			cout << 'E' << '\n';
			break;
		}
	}
	return 0;
}
