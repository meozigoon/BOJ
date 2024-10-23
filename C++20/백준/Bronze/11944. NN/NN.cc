#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	string str = "";
	for (int i = 0; i < n; i++) 
    {
		str = str + to_string(n);
	}
	if (str.length() > m)
    {
		cout << str.substr(0, m);
	}
	else
    {
		cout << str;
	}
}