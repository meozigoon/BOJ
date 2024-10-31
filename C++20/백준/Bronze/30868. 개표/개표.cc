#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	int v;
	while (n--)
	{
		cin >> v;
		for (int i = 0; i < v / 5; i++)
			cout << "++++ ";
		for (int i = 0; i < v % 5; i++)
			cout << "|";
		cout << '\n';
	}
	return 0;
}