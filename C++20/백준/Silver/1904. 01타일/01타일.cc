#include <iostream>

using namespace std;

int arr[1000001];

int dp(int n)
{
    if(arr[n] == 0)
        arr[n] = (dp(n - 1) + dp(n - 2)) % 15746;
    return arr[n];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    arr[1] = 1;
    arr[0] = 1;
    cout << dp(n);
}