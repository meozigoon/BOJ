#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<bool> p(1003002, true);
    p[1] = false;
    for (int i = 2; i < sqrt(1003002); i++)
        if (p[i] == true)
            for (int j = 2 * i; j < 1003002; j += i)
                p[j] = false;
    string s1;
    bool ch = true;
    for (int i = n; i < 1003002; i++)
        if (p[i] == true)
        {
            s1 = to_string(i);
            for (int j = 0; j < s1.length(); j++)
                if (s1[j] != s1[s1.length() - j - 1])
                {
                    ch = false;
                    break;
                }
            if (ch)
            {
                cout << i;
                break;
            }
            s1 = "";
            ch = true;
        }
}