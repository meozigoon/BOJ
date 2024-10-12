#include <iostream>
#include <vector>

using namespace std;

int gcd(int x, int y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t, n;
    cin >> t;
    long long sum = 0;
    for (int k = 0; k < t; k++)
    {
        cin >> n;
        vector<int> num(n);
        for (int i = 0; i < n; i++)
            cin >> num[i];
        sum = 0;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                sum += gcd(num[i], num[j]);
        cout << sum << '\n';
    }
}