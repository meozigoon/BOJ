#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    int k = 0;
    int ans;
    while (cin >> n)
    {
        ans = 1;
        k = 1;
        while (1)
        {
            if (ans % n == 0)
                break;
            else
            {
                k++;
                ans = ans * 10 + 1;
                ans %= n;
            }
        }
        cout << k << '\n';
    }
}