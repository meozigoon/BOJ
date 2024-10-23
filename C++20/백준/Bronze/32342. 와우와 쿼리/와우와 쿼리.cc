#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, cnt;
    string s;
    cin >> n;
    while (n--)
    {
        cnt = 0;
        cin >> s;
        for (int i = s.length() - 1; i >= 2; i--)
            if (s[i] == 'W' && s[i - 1] == 'O' && s[i - 2] == 'W')
                cnt++;
        cout << cnt << '\n';
    }
    return 0;
}