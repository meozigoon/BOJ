#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    long long a[2];
    cin >> a[0] >> a[1];
    if (!(a[0] % 2) || !(a[1] % 2))
        cout << 0;
    else
        cout << min(a[0], a[1]);
    return 0;
}