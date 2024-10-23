#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, a, b, aa = 1, bb = 1;
    cin >> n >> a >> b;
    while (n--)
    {
        aa += a;
        bb += b;
        if (aa < bb)
            swap(aa, bb);
        else if (aa == bb)
            bb--;
    }
    cout << aa << ' ' << bb;
    return 0;
}