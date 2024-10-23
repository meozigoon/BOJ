#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m, k;
	cin >> n >> m >> k;
	long long a;
	long long sum1 = 0, sum2 = 0, sum = 0;
	long long ans = 0;
	long long arr1[10001], arr2[10001];
	for (int i = 1; i <= n; i++)
	{
		cin >> arr1[i];
		sum1 += arr1[i];
	}
	for (int i = 1; i <= m; i++)
	{
		cin >> arr2[i];
		sum2 += arr2[i];
	}

	sum = min(sum1, sum2);
	sum1 = sum2 = sum;
	for (long long i = 1; sum1 > 0; i++)
	{
		if (arr1[i] <= sum1)
		{
			ans += i * arr1[i];
			sum1 -= arr1[i];
		}
		else
		{
			ans += i * sum1;
			sum1 = 0;
		}
	}
	for (long long i = 1; sum2 > 0; i++)
	{
		if (arr2[i] <= sum2)
		{
			ans += i * arr2[i];
			sum2 -= arr2[i];
		}
		else
		{
			ans += i * sum2;
			sum2 = 0;
		}
	}
	cout << sum << ' ' << ans;
	return 0;
}