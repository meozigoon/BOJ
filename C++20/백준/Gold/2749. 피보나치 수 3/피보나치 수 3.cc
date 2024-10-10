#include<iostream>

using namespace std;

long long a[1500001];

void f(long long n)
{
    a[0] = 0;
    a[1] = 1;
    for (int i = 0; i < n % 1500000; i++)
        a[i + 2] = (a[i + 1] + a[i]) % 1000000;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    long long n;
    cin >> n;
    f(n);
    cout << a[n % 1500000] << "\n";
}