#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    if (n > m)
        cout << (m - 1) * 2 + 1;
    else
        cout << (n - 1) * 2;
    return 0;
}