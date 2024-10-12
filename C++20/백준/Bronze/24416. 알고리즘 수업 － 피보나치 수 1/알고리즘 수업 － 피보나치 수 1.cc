#include <iostream>

using namespace std;

int cnt1 = 0;
int cnt2 = 0;
int arr[44];

int fib(int a)
{
	if (a == 1 || a == 2)
	{
		cnt1++;
		return 1;
	}
	else
	{
		return fib(a - 1) + fib(a - 2);
	}
}

void fibonacci(int b)
{
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i <= b; i++)
	{
		cnt2++;
		arr[i] = arr[i - 1] + arr[i - 2];
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long answer;
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << cnt1 << ' ' << cnt2;
}