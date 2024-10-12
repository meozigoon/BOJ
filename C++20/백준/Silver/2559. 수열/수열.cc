#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;
	vector<int> num(n);
	for (int i = 0; i < n; i++)
		cin >> num[i];
	int start = 0, end = k - 1;
	int sum = 0;
	for (int i = start; i <= end; i++)
		sum += num[i];
	int max = sum;
	while (1)
	{
		start++;
		end++;
		if (end == n)
			break;
		sum -= num[start - 1];
		sum += num[end];
		if (sum > max)
			max = sum;
	}
	cout << max;

}