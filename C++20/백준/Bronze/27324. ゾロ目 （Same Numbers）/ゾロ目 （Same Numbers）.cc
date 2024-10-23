#include <iostream>

using namespace std;

int main(void)
{
    char s[2];
    cin >> s[0] >> s[1];
    if (s[0] == s[1])
        cout << 1;
    else
        cout << 0;
}