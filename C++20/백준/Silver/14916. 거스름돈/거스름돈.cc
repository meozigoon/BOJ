#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
	int n, cnt = 0;
    cin >> n;
	if (n % 5)
        while (n > 0)
        {
			n -= 2;
			cnt++;
			if (n % 5 == 0)
            {
                cout << cnt + n / 5;
				break;
			}
		}
	else
		cout << n / 5;
	if (n < 0)
        cout << -1;
	return 0;
}