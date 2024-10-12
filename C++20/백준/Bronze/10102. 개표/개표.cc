#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnta = 0, cntb = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            cnta++;
        else
            cntb++;
    }
    if (cnta > cntb)
        cout << 'A';
    else if (cnta < cntb)
        cout << 'B';
    else
        cout << "Tie";
}