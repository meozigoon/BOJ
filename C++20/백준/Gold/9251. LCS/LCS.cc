#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    a = " " + a;
    b = " " + b;
    vector<vector<int>> lcs(a.length(), vector<int>(b.length()));
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
    cout << lcs[a.length() - 1][b.length() - 1];
    return 0;
}