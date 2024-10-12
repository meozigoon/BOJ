#include <iostream>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	string str;
	int sum = 0;
	bool che = true;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '(')
				sum++;
			else if (str[j] == ')')
				sum--;
			if (sum < 0)
			{
				cout << "NO" << endl;
				che = false;
				break;
			}
		}
		if (che)
		{
			if (sum == 0)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		che = true;
		sum = 0;
	}
}