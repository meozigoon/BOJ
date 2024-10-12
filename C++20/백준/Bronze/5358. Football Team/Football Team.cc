#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    while (cin >> s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'e')
                cout << 'i';
            else if (s[i] == 'i')
                cout << 'e';
            else if (s[i] == 'E')
                cout << 'I';
            else if (s[i] == 'I')
                cout << 'E';
            else
                cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}