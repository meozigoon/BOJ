#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(a + c, b);
	return 0;
}