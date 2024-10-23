#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

int main(void)
{
	int a, b, m;
	cin >> a >> b;
	cin >> m;
	int to_dec = 0;
	while (m--)
	{
		int num;
		cin >> num;
		to_dec += num * pow(a, m);
	}
	stack<int> ans;
	int div = to_dec;
	while (div)
	{
		ans.push(div % b);
		div /= b;
	}
	while (!ans.empty())
	{
		cout << ans.top() << ' ';
		ans.pop();
	}
}