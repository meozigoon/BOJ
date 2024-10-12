#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ' ';
        if ((i + 1) % 6 == 0 || i == n - 1)
            cout << "Go! ";
    }
    return 0;
}