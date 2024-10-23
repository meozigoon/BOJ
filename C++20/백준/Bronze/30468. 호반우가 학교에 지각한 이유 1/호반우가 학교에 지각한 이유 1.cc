#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int s, d, i, l, n, sum;
    cin >> s >> d >> i >> l >> n;
    sum = n * 4 - s - d - i - l;
    if (sum > 0)
        cout << sum;
    else
        cout << 0;
    return 0;
}