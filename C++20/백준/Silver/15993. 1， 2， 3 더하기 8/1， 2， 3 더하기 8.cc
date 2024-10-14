#include <iostream>

using namespace std;

int even[100001], odd[100001];

unsigned long long e(int n);
unsigned long long o(int n);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    even[1] = 0;
    even[2] = 1;
    even[3] = 2;
    odd[1] = 1;
    odd[2] = 1;
    odd[3] = 2;
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << o(n) << ' ' << e(n) << '\n';
    }
}

unsigned long long e(int n)
{
    if (even[n] == 0 && n != 1)
        even[n] = (o(n - 1) + o(n - 2) + o(n - 3)) % 1000000009;
    return even[n];
}

unsigned long long o(int n)
{
    if (odd[n] == 0)
        odd[n] = (e(n - 1) + e(n - 2) + e(n - 3)) % 1000000009;
    return odd[n];
}