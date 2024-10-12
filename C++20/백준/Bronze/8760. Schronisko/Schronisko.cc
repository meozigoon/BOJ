#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m, k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> n >> m;
        cout << n * m / 2 << '\n';
    }
    return 0;
}