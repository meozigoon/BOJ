#include <iostream>

using namespace std;

long long ch[10];

void cal(long long n, long long ten)
{
	while (n)
	{
		ch[n % 10] += ten;
		n /= 10;
	}
	return;
}

void sol(long long a, long long b, long long ten)
{
	while (a % 10 && a <= b)
	{
		cal(a, ten);
		a++;
	}
	if (a > b)
		return;
	while (b % 10 != 9 && b >= a)
	{
		cal(b, ten);
		b--;
	}
	long long cnt = (b / 10 - a / 10 + 1);
	for (int i = 0; i < 10; i++)
		ch[i] += cnt * ten;
	sol(a / 10, b / 10, ten * 10);
	return;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	long long n;
	cin >> n;
	sol(1, n, 1);
	for (int i : ch)
		cout << i << ' ';
}