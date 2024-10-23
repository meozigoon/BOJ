#include <iostream>

using namespace std;

int D[1000001] = { 0,1 };

int main(void)
{
    ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
        D[i] = (D[i - 1] + D[i - 2]) % 1000000007;
    cout << D[n];
}