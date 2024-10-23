#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            k--;
        if (k == 0)
        {
            cout << i;
            break;
        }
    }
    if (k != 0)
        cout << 0;
}