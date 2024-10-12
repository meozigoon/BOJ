#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int s1, s2, s3, s4, s[5], tmp[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> s1 >> s2 >> s3 >> s4;
		s[i] = s1 + s2 + s3 + s4;
	}
	for (int i = 0; i < 5; i++)
		tmp[i] = s[i];
	sort(tmp, tmp + 5);
	for (int i = 0; i < 5; i++)
	{
		if (tmp[4] == s[i])
		{
			cout << i + 1 << ' ' << s[i];
			break;
		}
	}
	return 0;
}