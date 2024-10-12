#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int l, w;
    for (int j = 0; j < t; j++)
    {
        cin >> l >> w;
        for (int i = 0; i < w; i++)
        {
            for (int k = 0; k < l; k++)
                cout << "X";
            cout << '\n';
        }
        if (j < t - 1) cout << '\n';
    }
    return 0;
}