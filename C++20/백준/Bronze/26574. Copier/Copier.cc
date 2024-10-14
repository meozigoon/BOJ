#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << n << ' ' << n << '\n';
    }
}