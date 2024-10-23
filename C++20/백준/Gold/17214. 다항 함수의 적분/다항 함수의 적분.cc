#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void)
{
	string s;
	string chk;
	int con = 0;
	int sq = 0;
	int ch = 0;
	int k = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == 'x')
		{
			sq = 1;
			ch = i;
			break;
		}
	if (!sq)
	{
		con = stoi(s);
		if (!con)
			cout << "W";
		else if (abs(con) == 1)
		{
			if (con == 1)
				cout << "x+W";
			else if (con == -1)
				cout << "-x+W";
		}
		else
			cout << con << "x+W";
	}
	else
	{
		for (int i = 0; i < ch; i++)
			chk += s[i];
		con = stoi(chk) / 2;
		chk = "";
		for (int i = ch + 1; i < s.length(); i++)
			chk += s[i];
		if (chk == "")
			chk = "0";
		k = stoi(chk);
		if (abs(con) == 1)
		{
			if (con == 1)
				cout << "xx";
			else if (con == -1)
				cout << "-xx";
		}
		else
			cout << con << "xx";
		if (k)
		{
			if (abs(k) == 1)
			{
				if (k == 1)
					cout << "+x+W";
				else if (k == -1)
					cout << "-x+W";
			}
			else if (k > 0)
				cout << "+" << k << "x+W";
			else if (k < 0)
				cout << k << "x+W";
		}
		else
			cout << "+W";
	}
	return 0;
}