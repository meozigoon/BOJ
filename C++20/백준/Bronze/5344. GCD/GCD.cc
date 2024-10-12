#include <iostream>

using namespace std;

int gcd (int x, int y)
{
    int tmp;
    if(x < y)
    {
        tmp = x;
        x= y;
        y = tmp;
    }
    int r;
    while(y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main(void)
{
    int n;
    cin >> n;
    int x, y;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        cout << gcd(x, y) << '\n';
    }
}