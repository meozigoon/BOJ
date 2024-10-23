#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	for (int j = 0; j < n - 1; j++)
	{
		cout << ' ';
	}
	cout << '*' << endl;
	for (int i = n; i >= 2; i--)
	{
		for (int j = 2; j < i; j++)
		{
			cout << ' ';
		}
		cout << '*';
		for (int j = 0; j < 1 + 2 * (n- i); j++)
		{
			if (j % 2 == 1)
				cout << '*';
			else
				cout << ' ';
		}
		cout << '*' << endl;
	}
}