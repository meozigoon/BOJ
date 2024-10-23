#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int cnt = 0;
    int a;
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        if (a % 10 == n)
            cnt++;
    }
    cout << cnt;
}