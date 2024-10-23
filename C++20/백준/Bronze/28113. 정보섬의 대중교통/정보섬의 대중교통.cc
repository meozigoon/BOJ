#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    if (n > b)
        cout << "Bus";
    else if (a > b)
        cout << "Subway";
    else if (a == b)
        cout << "Anything";
    else if (a < b)
        cout << "Bus";

}