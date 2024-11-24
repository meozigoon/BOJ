#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int n;
	cin >> n;
	if (n <= 100000 && n % 2024 == 0)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}