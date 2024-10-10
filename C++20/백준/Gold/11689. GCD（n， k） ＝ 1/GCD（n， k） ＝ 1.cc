#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <set>
typedef unsigned long long ull;

using namespace std;

ull P[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37 };

ull p(__int128 x, __int128 y, __int128 m)
{
    x %= m;
    __int128 res = 1;
    while (y)
    {
        if (y % 2)
        {
            res *= x;
            res %= m;
        }
        x *= x;
        x %= m;
        y /= 2;
    }
    return (ull)res;
}

bool mr(ull n, ull a)
{
    if (a == n)
        return true;
    ull k = n - 1;
    ull tmp;
    while (1)
    {
        tmp = p(a, k, n);
        if (tmp == n - 1)
            return true;
        if (k % 2 == 1)
        {
            if (tmp == 1 || tmp == n - 1)
                return true;
            else
                return false;
        }
        k /= 2;
    }
}

bool ip(ull n)
{
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (auto& i : P)
        if (!mr(n, i))
            return false;
    return true;
}

__int128 f(__int128 x, __int128 c, __int128 n)
{
    return ((x * x) % n + c) % n;
}

ull pr(__int128 n)
{
    if (!(n & 1))
        return 2;
    if (ip(n))
        return n;
    __int128 x, y;
    __int128 c = rand() % 10 + 1;
    __int128 g = 1;
    x = y = rand() % (n - 2) + 2;
    while (g == 1)
    {
        x = ((x * x) % n + c) % n;
        y = ((y * y) % n + c) % n;
        y = ((y * y) % n + c) % n;
        g = gcd(x - y, n);
        if (g == n)
            return pr(n);
    }
    if (ip(g))
        return g;
    else
        return pr(g);
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    srand((unsigned)time(NULL));
    ull n, a, res;
    cin >> n;
    res = n;
    set<ull> ans;
    pair<set<ull>::iterator, bool> ch;
    while (n - 1)
    {
        a = pr(n);
        ch = ans.insert(a);
        if (ch.second)
            res /= a;
        n /= a;
    }
    for (auto& i : ans)
        res *= i - 1;
    cout << res;
    return 0;
}