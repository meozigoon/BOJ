#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, s;
	cin >> n >> s;
	vector<int> num(n);
	for (int i = 0; i < n; i++)
		cin >> num[i];
	int start = 0;
	int end = 0;
	int sum = num[0];
	int len = n + 1;
	while (start <= end && end < n)
	{
		if (sum < s)
		{
			if (end == n - 1)
				break;
			sum += num[end + 1];
			end++;
		}
		else
		{
			len = min(len, end - start + 1);
			sum -= num[start];
			start++;
		}
	}
	if (len == n + 1)
		cout << 0;
	else
		cout << len;
}