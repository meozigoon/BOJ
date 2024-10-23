#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, cnt = 0, x;
    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        if (x == n)
            cnt++;
    }
    cout << cnt;
    return 0;
}