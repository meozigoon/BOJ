#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ctime>
#include <map>
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

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    srand((unsigned)time(NULL));
    ull a, b;
    cin >> a >> b;
    for (ull i = a; i <= b; i++)
        if (ip(i))
            cout << i << ' ';
        else if (i == 9)
            cout << "9 ";
    return 0;
}