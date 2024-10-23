#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    double x, y;
    while (1)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
            break;
        if (x == 0 || y == 0)
            cout << "AXIS\n";
        else if (x > 0 && y > 0)
            cout << "Q1\n";
        else if (x < 0 && y > 0)
            cout << "Q2\n";
        else if (x < 0 && y < 0) 
            cout << "Q3\n";
        else
            cout << "Q4\n";
    }
    cout << "AXIS\n";
    return 0;
}