#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    while (1)
    {
        cin >> n;
        if (!n)
            break;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
                cout << '*';
            cout << '\n';
        }
    }
    return 0;
}