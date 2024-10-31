#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    int cnt = 0;
    cin >> s;
    for (int i = s.length() - 1; i >= 3; i--)
        if (s[i] == 'H' && s[i - 1] == 'S' && s[i - 2] == 'K' && s[i - 3] == 'D')
            cnt++;
    cout << cnt;
    return 0;
}