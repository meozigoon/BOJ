#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int m, d;
    cin >> m >> d;
    if (m == 2 && d == 18)
        cout << "Special";
    if (m == 2 && d < 18 || m < 2)
        cout << "Before";
    if (m == 2 && d > 18 || m > 2)
        cout << "After";
    return 0;
}