#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
	int a, b;
	char c;
	int ans;
	cin >> a;
	ans = a;
	while (1)
	{
		cin >> c;
		if (c == '=')
			break;
		cin >> b;
		switch (c)
		{
		case '+':
			ans += b;
			break;
		case '-':
			ans -= b;
			break;
		case '*':
			ans *= b;
			break;
		case '/':
			ans /= b;
			break;
		}
	}
	cout << ans;
}