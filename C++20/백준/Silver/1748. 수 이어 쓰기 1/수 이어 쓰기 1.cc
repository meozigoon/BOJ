#include<iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
    int n, r = 0;
    cin >> n;
    for (int i = 1; i <= n; i *= 10)
        r += n - i + 1;
    cout << r;
}