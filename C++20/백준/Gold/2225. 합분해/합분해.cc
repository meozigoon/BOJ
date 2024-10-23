#include <iostream>

using namespace std;

int arr[201][201];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    arr[1][1] = 1;
    for (int i = 2; i <= 200; i++)
    {
        arr[i][1] = 1;
        arr[1][i] = i;
    }
    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= k; j++)
            arr[i][j] = (arr[i - 1][j] + arr[i][j - 1]) % 1000000000;
    cout << arr[n][k];
}