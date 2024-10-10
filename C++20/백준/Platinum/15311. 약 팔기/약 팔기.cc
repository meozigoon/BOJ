#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cout << 2000 << '\n';
    for (long long i = 0; i < 1000; i++)
        cout << '1' << ' ';
    for (long long i = 0; i < 1000; i++)
        cout << "1000" << ' ';
    return 0;
}