#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>

using namespace std;

void hanoi(int num, int from, int by, int to)
{
	if (num == 1)
        cout << from << ' ' << to << '\n';
	else
	{
		hanoi(num - 1, from, to, by);
		cout << from << ' ' << to << '\n';
		hanoi(num - 1, by, from, to);
	}
}

int main(void)
{
	int n;
	cin >> n;

	string a = to_string(pow(2, n));
	
	int x = a.find('.');
	a = a.substr(0, x);
	a[a.length() - 1] -= 1;
	cout << a << '\n';
	if(n <= 20)
		hanoi(n, 1, 2, 3);
}