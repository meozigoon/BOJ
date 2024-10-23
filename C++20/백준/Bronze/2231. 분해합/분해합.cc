#include <iostream>

using namespace std;

int sum(int n)
{
    int ans = 0;
    while (n != 0)
    {
        ans = ans + n % 10;
        n = n / 10;
    }
    return ans;
}

int main(void)
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (i + sum(i) == n)
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
}