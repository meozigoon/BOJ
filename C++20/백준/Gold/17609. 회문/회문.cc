#include <iostream>
#include <string>

using namespace std;


int pal(string str, bool ch, int p1, int p2)
{
    int l = p1, r = p2;
    while (l < r)
    {
        if (str[l] == str[r])
        {
            l++;
            r--;
        }
        else
        {
            if (!ch && (pal(str, true, l + 1, r) == 0 || pal(str, true, l, r - 1) == 0))
                return 1;
            return 2;
        }
    }
    return 0;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    string str;
    while (n--)
    {
        cin >> str;
        cout << pal(str, false, 0, str.length() - 1) << '\n';
    }
}