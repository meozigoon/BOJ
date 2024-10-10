#include <iostream>
#include <cmath>

using namespace std;

long long num[1000001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    long long mi, ma;
    int cnt = 0;
    cin >> mi >> ma;
    long long n;
    for (long long i = 2; i * i <= ma; i++)
    {
        n = mi / (i * i);
        if (mi % (i * i))
            n++;
        while (n * i * i <= ma)
        {
            num[n * i * i - mi] = 1;
            n++;
        }
    }
    for (int i = 0; i <= ma - mi; i++)
        if (num[i] == 0) cnt++;
    cout << cnt;
}