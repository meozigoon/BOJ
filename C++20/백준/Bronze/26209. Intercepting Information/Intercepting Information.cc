#include <iostream>

using namespace std;

int main(void)
{
    int n[8];
    bool ch = true;
    for(int i = 0; i < 8; i++)
        cin >> n[i];
    for(int i = 0; i < 8; i++)
        if (n[i] != 0 && n[i] != 1)
            ch = false;
    cout << (ch ? "S" : "F");
}