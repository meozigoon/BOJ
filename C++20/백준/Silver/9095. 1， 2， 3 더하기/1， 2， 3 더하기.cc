#include <iostream>

using namespace std;

int arr[12];

int dp(int n)
{
	if (n <= 1)
	{
		arr[n] = n;
		return arr[n];
	}
	if (arr[n] != 0)
		return arr[n];
	arr[n] = dp(n - 1) + dp(n - 2) + dp(n - 3);
	return arr[n];
}

int main(void)
{
    int t;
    cin >> t;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    arr[4] = 7;
    int n;
    while(t--)
    {
        cin >> n;
        cout << dp(n) << '\n';
    }
}