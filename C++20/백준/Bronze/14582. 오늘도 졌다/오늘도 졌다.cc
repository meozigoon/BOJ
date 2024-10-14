#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a[9], b[9];
	int suma = 0, sumb = 0;
	bool chk = false;
	for (int i = 0; i < 9; i++)
		cin >> a[i];
	for (int i = 0; i < 9; i++)
		cin >> b[i];
	for (int i = 0; i < 9; i++)
	{
		suma += a[i];
		if (suma > sumb)
		{
			chk = true;
			break;
		}
		sumb += b[i];
	}

	if (chk)
		cout << "Yes";
	else
		cout << "No";
}