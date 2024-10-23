#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    bool check[26] = { false, };
    bool ch = false;
    char c;
    int n;
    string s;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 26; j++)
            check[j] = false;
        ch = false;
        cin >> s;
        c = s[0];
        for (int j = 1; j < s.length(); j++)
        {
            if (s[j] == c)
                continue;
            else
            {
                if (!check[s[j] - 'a'])
                {
                    check[c - 'a'] = true;
                    c = s[j];
                }
                else
                    ch = true;
            }
        }
        if (!ch)
            cnt++;
    }
    cout << cnt;
}