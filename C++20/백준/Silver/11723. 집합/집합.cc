#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a = 0, b = 0;
	string s;
	int x;
	int n;
	cin >> n;
	while (n--)
	{
		cin >> s;
		if (s == "add")
		{
			cin >> x;
			b = 1 << x;
			if ((a & b) == 0)
				a = a | b;
		}
		else if (s == "remove")
		{
			cin >> x;
			a = a & ~(1 << x);
		}
		else if (s == "check")
		{
			cin >> x;
			b = 1 << x;
			if ((a & b) != 0)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (s == "toggle")
		{
			cin >> x;
			a = a ^ (1 << x);
		}
		else if (s == "all")
		{
			a = 0;
			for (int i = 1; i <= 20; i++)
			{
				a = a | (1 << i);
			}
		}
		else if (s == "empty")
		{
			a = 0;
		}
	}
}