#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <set>
typedef long long ll;

using namespace std;

ll P[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37 };

ll p(__int128 x, __int128 y, __int128 m)
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
    return (ll)res;
}

bool mr(ll n, ll a)
{
    if (a == n)
        return true;
    ll k = n - 1;
    ll tmp;
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

bool ip(ll n)
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

ll pr(__int128 n)
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

ll phi(ll n)
{
    ll res = n, a;
    set<ll> ans;
    pair<set<ll>::iterator, bool> ch;
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
    ll n, a;
    cin >> n;
    ll tmp = n;
    set<ll> div;
    bool check = false;
    if (n == 1)
        cout << 1;
    else
    {
        for (long i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                div.insert(i);
                div.insert(n / i);
            }
        }
        div.insert(n);
        for (auto& i : div)
        {
            if (n == i * phi(i))
            {
                cout << i;
                check = true;
                break;
            }
        }
        if (!check)
            cout << -1;
    }
    return 0;
}