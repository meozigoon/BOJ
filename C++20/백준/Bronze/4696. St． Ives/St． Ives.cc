#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    double a;
    while (1)
    {
        cin >> a;
        if (a == 0)
            break;
        cout << fixed;
        cout.precision(2);
        cout << 1 + a + a * a + a * a * a + a * a * a * a << '\n';
    }
}