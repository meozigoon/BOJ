#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector<vector<int>> lcs;
    string a, b;
    cin >> a >> b;
    a = " " + a;
    b = " " + b;
    lcs.assign(a.length(), vector<int>(b.length()));
    vector<char> c;
    for (int i = 0; i < a.length(); i++)
        for (int j = 0; j < b.length(); j++)
        {
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (a[i] == b[j])
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else
                lcs[i][j] = max(lcs[i][j - 1], lcs[i - 1][j]);
        }
    int la = a.length() - 1;
    int lb = b.length() - 1;
    string ans = "";
    while (lcs[la][lb])
    {
        if (lcs[la][lb] == lcs[la - 1][lb])
            la--;
        else if (lcs[la][lb] == lcs[la][lb - 1])
            lb--;
        else
        {
            ans += a[la];
            la--;
            lb--;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << lcs[a.length() - 1][b.length() - 1] << '\n';
    cout << ans;
    return 0;
}