#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    unsigned long long n, ans;
    while(1)
    {
        cin >> n;
        if (!n)
            break;
        if (n == 1)
        {
            cout << "0\n";
            continue;
        }
        ans = n;
        for (unsigned long long i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                ans -= ans / i;
                while (n % i == 0)
                    n /= i;
            }
        }
        if (n > 1)
            ans -= ans / n;
        cout << ans << '\n';
    }
}