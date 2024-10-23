#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m, a, b;
	cin >> n >> m;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;
	while (m--)
	{
		cin >> a >> b;
		for (int i = 0; i <= (b - a) / 2; i++)
			swap(arr[a + i - 1], arr[b - i - 1]);
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << ' ';
}