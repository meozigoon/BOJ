#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if ((n + 1) % (n % 100) == 0)
            cout << "Good\n";
        else
            cout << "Bye\n";
    }
}