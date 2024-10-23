#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int a, b;
	cin >> a >> b;
	if (b <= a)
		cout << "Congratulations, you are within the speed limit!";
	else
	{
		if (1 + a < b && b <= 20 + a)
			cout << "You are speeding and your fine is $100.";
		else if (21 + a < b && b <= 30 + a)
			cout << "You are speeding and your fine is $270.";
		else
			cout << "You are speeding and your fine is $500.";
	}
	return 0;
}
