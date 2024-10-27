#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	string a, b, c;
	set<char> s1, s2;
	s2.insert('l');
	s2.insert('k');
	s2.insert('p');
	cin >> a >> b >> c;
	s1.insert(a[0]);
	s1.insert(b[0]);
	s1.insert(c[0]);
	if (s2 == s1)
		cout << "GLOBAL";
	else
		cout << "PONIX";
	return 0;
}