#include <iostream>

using namespace std;

int main(void)
{
	string s;
	cin >> s;
	int cnt[26] = { 0, };
	for (int i = 0; i < s.length(); i++)
		cnt[s[i] - 97]++;
	for (int i = 0; i < 26; i++)
		printf("%d ", cnt[i]);
	return 0;
}