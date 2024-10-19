#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'I')
        {
            s[i] = tolower(s[i]);
            cout << s[i];
        }
        else
        {
            s[i] = towupper(s[i]);
            cout << s[i];
        }
    }
    return 0;
}