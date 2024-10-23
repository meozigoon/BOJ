#include <iostream>
#include <algorithm>

using namespace std;

int cmp(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	else
	{
		return a.length() < b.length();
	}
}

int main(void)
{
	int n;
	cin >> n;
	string* str = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str[i];
	}
	sort(str, str + n, cmp);
	cout << str[0] << endl;
	for (int i = 0; i < n - 1; i++)
	{
		if (str[i] == str[i + 1])
		{
			continue;
		}
		cout << str[i + 1] << endl;
	}
}