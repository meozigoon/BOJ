#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    unsigned long long ans, tmp, k, cnt = 0;
    cin >> k;
    for (unsigned long long n = 1; n <= k; n++)
    {
        tmp = n;
        if (!n)
            break;
        if (tmp == 1)
            continue;
        ans = tmp;
        for (unsigned long long i = 2; i <= sqrt(tmp); i++)
        {
            if (tmp % i == 0)
            {
                ans -= ans / i;
                while (tmp % i == 0)
                    tmp /= i;
            }
        }
        if (tmp > 1)
            ans -= ans / tmp;
        cnt += ans;
    }
    cout << cnt;
}