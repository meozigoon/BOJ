#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
    string n;
    int a, w;
	while (1)
    {
		cin >> n >> a >> w;
		if (n == "#" && a == 0 && w == 0)
            break;
		if (a > 17 || w >= 80)
            cout << n << " Senior" << '\n';
		else
            cout << n << " Junior" << '\n';
	}
}