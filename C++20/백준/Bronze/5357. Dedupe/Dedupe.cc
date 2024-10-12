#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    string s;
    cin >> n;
    char prev;
    while (n--)
    {
        prev = ' ';
        cin >> s;
        for (int i = 0; i < s.length(); i++)
            if (prev != s[i])
            {
                cout << s[i];
                prev = s[i];
            }
        cout << '\n';
    }
    return 0;
}