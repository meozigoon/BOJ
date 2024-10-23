#include<iostream>

using namespace std;

int a[200000];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
	int n;
    cin >> n;
	for (int i = 0; i < n; i++)
        cin >> a[i];
	int tmp = n - 2;
	while (tmp)
	{
		if (tmp == 1)
		{
			a[0]--;
			a[n - 1]--;
		}
		else
		{
			if (a[0] >= a[n - 1])
				a[0]--;
			else
				a[n - 1]--;
		}
		tmp--;
	}
	if (a[0] >= a[n - 1])
        cout << a[0];
	else
        cout << a[n - 1];
	return 0;
}