#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    long long n;
    cin >> n;
    long long tmp;
    long long lcm = 1;
    vector<bool> p(1000001, true);
    for (int i = 2; i <= 1000000; i++)
        if (p[i])
            for (int j = i + i; j <= 1000000 && j > 1; j += i)
                p[j] = false;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (p[tmp])
            if (lcm % tmp != 0)
                lcm *= tmp;
    }
    if (lcm == 1)
        cout << -1;
    else
        cout << lcm;
}