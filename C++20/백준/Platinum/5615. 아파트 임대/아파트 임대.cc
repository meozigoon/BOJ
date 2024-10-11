#include <iostream>
#include <cmath>

using namespace std;

unsigned long long p(unsigned long long x, unsigned long long y, unsigned long long m)
{
    unsigned long long res = 1;
    x %= m;
    while (y)
    {
        if (y & 1)
        {
            res *= x % m;
            res %= m;
        }
        y /= 2;
        x *= x % m;
        x %= m;
    }
    return res;
}

bool mr(unsigned long long n, unsigned long long a)
{
    unsigned long long k = n - 1;
    unsigned long long tmp;
    while (1)
    {
        tmp = p(a, k, n);
        if (tmp == n - 1)
            return true;
        if (k & 1)
        {
            if (tmp == 1)
                return true;
            else
                return false;
        }
        k /= 2;
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    unsigned long long t, cnt(0);
    cin >> t;
    unsigned long long n;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        n = 2 * n + 1;
        if (n == 7 || n == 61)
            continue;
        if (!mr(n, 2))
            cnt++;
        else if (!mr(n, 7))
            cnt++;
        else if (!mr(n, 61))
            cnt++;
    }
    cout << t - cnt;
    return 0;
}