#include <iostream>

using namespace std;

long gcd(long a, long b)
{
    long n;
    if (a < b)
        swap(a, b);
    while (b != 0)
    {
        n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int main(void)
{
    long a, b;
    long t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << (a * b) / gcd(a, b) << '\n';
    }
}