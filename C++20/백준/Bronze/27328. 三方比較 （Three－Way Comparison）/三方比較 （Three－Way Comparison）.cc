#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    if (n > m)
        cout << 1;
    else if (n == m)
        cout << 0;
    else
        cout << -1;
}