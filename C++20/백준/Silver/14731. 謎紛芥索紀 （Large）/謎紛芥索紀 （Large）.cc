#include <iostream>

using namespace std;

long long m = 1000000007, ans, half;

long long pow (long long b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 1)
        return (pow(b - 1) * 2) % m;
    half = pow(b / 2);
    return (half * half) % m;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL); 
    long long n, c, k;
    cin >> n;
    while (n--)
    {
        cin >> c >> k;
        ans = (ans + ((c * k) % m) * pow(k - 1)) % m;
    }
    cout << ans;
    return 0;
}