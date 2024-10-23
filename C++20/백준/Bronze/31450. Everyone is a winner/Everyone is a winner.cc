#include <iostream>

using namespace std;

int main (void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int m, k;
    cin >> m >> k;
    if (m % k == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}