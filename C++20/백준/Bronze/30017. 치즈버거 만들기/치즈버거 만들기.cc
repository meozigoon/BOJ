#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a, b;
	cin >> a >> b;
	cout << min(a - 1, b) * 2 + 1;
	return 0;
}