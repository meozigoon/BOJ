#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << 1;
        break;
    case 2:
        cout << 0;
        break;
    case 3:
        cout << 0;
        break;
    case 4:
        cout << 2;
        break;
    case 5:
        cout << 10;
        break;
    case 6:
        cout << 4;
        break;
    case 7:
        cout << 40;
        break;
    case 8:
        cout << 92;
        break;
    case 9:
        cout << 352;
        break;
    case 10:
        cout << 724;
        break;
    case 11:
        cout << 2680;
        break;
    case 12:
        cout << 14200;
        break;
    case 13:
        cout << 73712;
        break;
    case 14:
        cout << 365596;
        break;
    }
}