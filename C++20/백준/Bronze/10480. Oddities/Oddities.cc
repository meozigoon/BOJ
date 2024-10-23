#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
            cout << n << " is even\n";
        else
            cout << n << " is odd\n";
    }
    return 0;
}