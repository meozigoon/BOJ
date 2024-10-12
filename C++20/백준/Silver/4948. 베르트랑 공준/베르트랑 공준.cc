#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int a[246913];
	int n, cnt;
	while (1)
    {
        cin >> n;
		if (n == 0)
			break;
        cnt = 0;
		a[0] = 0;
		a[1] = 0;
		for (int i = 2; i <= 2 * n; i++)
			a[i] = 1;
		for (int i = 2; i <= int(sqrt(2 * n)); i++)
			for (int j = 2; i * j <= 2 * n; j++)
				a[i*j] = 0;
		for (int i = n + 1; i <= 2 * n; i++)
			if (a[i] == 1)
				cnt++;
		cout << cnt << '\n';
	}
}