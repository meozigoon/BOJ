#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int h, m;
    cin >> h >> m;
    int start = 9 * 60,
        t = h * 60 + m;
    int time = t - start;
    cout << time;
}