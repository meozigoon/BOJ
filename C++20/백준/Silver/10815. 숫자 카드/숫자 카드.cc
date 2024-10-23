#include <iostream>
#include <algorithm>

using namespace std;

int a[500001];
int b[500001];
int c[500001] = { 0, };

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a + n);
    int right = n - 1;
	int left = 0;
    int mid;
	for (int i = 0; i < m; i++)
    {
		right = n - 1;
		left = 0;
		while (left <= right)
        {
			mid = (right + left) / 2;
			if (a[mid] == b[i])
            {
				c[i] = 1;
				break;
			}
			if (a[mid] > b[i])
				right = mid - 1;
			else
				left = mid + 1;
		}
	}
	for (int i = 0; i < m; i++)
		cout << c[i] << ' ';
	cout << '\n';
}