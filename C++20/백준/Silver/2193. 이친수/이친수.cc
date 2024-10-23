#include <iostream>

using namespace std;

unsigned long long z[100], o[100];

unsigned long long one(unsigned long long n);
unsigned long long zero(unsigned long long n);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    unsigned long long n;
    cin >> n;
    z[1] = 0;
    o[1] = 1;
    cout << zero(n) + one(n);
}

unsigned long long one(unsigned long long n)
{
    if (o[n] == 0)
        o[n] = zero(n - 1);
    return o[n];
}

unsigned long long zero(unsigned long long n)
{
    if (n != 1 && z[n] == 0)
        z[n] = zero(n - 1) + one(n - 1);
    return z[n];
}