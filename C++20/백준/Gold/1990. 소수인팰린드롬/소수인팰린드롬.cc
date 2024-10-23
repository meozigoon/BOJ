#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

vector<bool> p(100000001, true);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    p[1] = false;
    for (int i = 2; i <= sqrt(m); i++)
        if (p[i] == true)
            for (int j = 2 * i; j <= m; j += i)
                p[j] = false;
    string s;
    bool ch = true;
    for (int i = n; i <= m; i++)
        if (p[i] == true)
        {
            s = to_string(i);
            for (int j = 0; j < s.length(); j++)
                if (s[j] != s[s.length() - j - 1])
                {
                    ch = false;
                    break;
                }
            if (ch)
            {
                cout << i << '\n';
            }
            s = "";
            ch = true;
        }
    cout << "-1\n";
}