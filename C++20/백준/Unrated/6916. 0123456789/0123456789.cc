#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	if (n == 0 || n == 2 || n == 3 || n == 5 || n == 6 || n == 7 || n == 8 || n == 9)
		cout << " * * *";
	cout << '\n';
	for (int i = 0; i < 3; i++)
	{
		if (n == 0 || n == 4 || n == 8 || n == 9)
			cout << "*     *";
		else if (n == 5 || n == 6)
			cout << "*";
		else
			cout << "      *";
		cout << '\n';
	}
	if (n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 8 || n == 9)
		cout << " * * *";
	cout << '\n';
	for (int i = 0; i < 3; i++)
	{
		if (n == 0 || n == 6 || n == 8)
			cout << "*     *";
		else if (n == 1 || n == 3 || n == 4 || n == 5 || n == 7 || n == 9)
			cout << "      *";
		else
			cout << "*";
		cout << '\n';
	}
	if (n == 0 || n == 2 || n == 3 || n == 5 || n == 6 || n == 8 || n == 9)
		cout << " * * *";
	cout << '\n';
}