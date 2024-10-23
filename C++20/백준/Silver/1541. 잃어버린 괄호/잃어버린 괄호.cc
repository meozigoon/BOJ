#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    int ans = 0;
    string n;
    bool m = false;
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == '-' || s[i] == '+' || i == s.size())
        {
            if (m)
            {
                ans -= stoi(n);
                n = "";
            }
            else
            {
                ans += stoi(n);
                n = "";
            }
        }
        else
            n += s[i];
        if (s[i] == '-')
            m = true;
    }
    cout << ans;
}
