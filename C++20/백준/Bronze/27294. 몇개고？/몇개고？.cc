#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t, y;
    cin >> t >> y;
    if (y == 0 && 12 <= t && t <= 16)
        cout << 320;
    else if (t > 16 || t <= 11 || y == 1)
        cout << 280;
}