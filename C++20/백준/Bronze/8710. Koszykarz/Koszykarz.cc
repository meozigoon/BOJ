#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    long long k, w, m;
    cin >> k >> w >> m;
    long long result = 0;
    while (k < w)
    {
        k += m;
        result++;
    }
    cout << result << '\n';
    return 0;
}