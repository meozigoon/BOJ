#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int c[6] = { 500, 100, 50, 10, 5, 1 };
    int m, i = 0, cnt = 0;
    cin >> m;
    m = 1000 - m;
    while (m != 0)
    {
        if (c[i] > m)
        {
            i++;
            continue;
        }
        else
        {
            cnt += m / c[i];
            m %= c[i];
            i++;
        }
    }
    cout << cnt;
}