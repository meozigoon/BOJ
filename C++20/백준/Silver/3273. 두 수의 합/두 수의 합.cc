#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, x;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++)
		cin >> num[i];
	cin >> x;
	int start = 0, end = n - 1;
	sort(num.begin(), num.end());
	int cnt = 0;
	while (start < end)
	{
		if (num[start] + num[end] > x)
			end--;
		else if (num[start] + num[end] < x)
			start++;
		else if (num[start] + num[end] == x)
		{
			start++;
			cnt++;
		}
	}
	cout << cnt;
}