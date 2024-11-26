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
ull arr[10001];

ull p(ull x, ull y, ull m)
{
    x %= m;
    ull res = 1;
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
    if (n % 2 == 0 || (n % 6 != 1 && n % 6 != 5))
        return false;
    for (auto& i : P)
        if (!mr(n, i))
            return false;
    return true;
}

ull f(ull x, ull c, ull n)
{
    return ((x * x) % n + c) % n;
}

ull pr(ull n)
{
    if (!(n & 1))
        return 2;
    if (ip(n))
        return n;
    ull x, y;
    ull c = rand() % 10 + 1;
    ull g = 1;
    x = y = rand() % (n - 2) + 2;
    while (g == 1)
    {
        x = f(x, c, n);
        y = f(f(y, c, n), c, n);
        g = gcd(x - y, n);
        if (g == n)
            return pr(n);
    }
    if (ip(g))
        return g;
    else
        return pr(g);
}

ull phi(ull n)
{
    ull res = n, a;
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
    return res;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    srand((unsigned)time(nullptr));
    ull t, n, ans, a;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> a >> n;
        for (ull i = 1; i <= n; i++)
        {
            if (!arr[i])
            {
                arr[i] = phi(i);
            }
            ans += arr[i];
        }
        cout << a << ' ' << ans + 1 << '\n';
    }
    return 0;
}