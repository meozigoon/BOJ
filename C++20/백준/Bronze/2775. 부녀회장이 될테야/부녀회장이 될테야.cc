#include <iostream>

using namespace std;

int num (int a, int b)
{
    if (b == 1)
        return 1;
    if (a == 0)
      return b;
    return (num(a - 1, b) + num(a, b - 1));
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t, k, n;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> k >> n;
        cout << num(k, n) << '\n';
    }
}