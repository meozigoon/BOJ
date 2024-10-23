#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, t, p, a[6];
    int sum = 0, tmp = 0;
    cin >> n;
    for (int i = 0; i < 6; i++)
        cin >> a[i];
    cin >> t >> p;
    for (int i = 0; i < 6; i++)
    {
        if (a[i] % t == 0)
            tmp = a[i] / t;
        else
            tmp = a[i] / t + 1;
        sum += tmp;
    }
    cout << sum << '\n';
    cout << n / p << ' ' << n % p << '\n';
    return 0;
}