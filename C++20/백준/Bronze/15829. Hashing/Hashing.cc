#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    int a;
    int l;
    unsigned long long ans = 0;
    cin >> l;
    cin >> s;
    unsigned long long r = 1;
    for(int i = 0; i < l; i++)
    {
        a = s[i] - 96;
        ans = (ans + a * r) % 1234567891;
        r *= 31;
        r %= 1234567891;
    }
    cout << ans;
}