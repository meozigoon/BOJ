#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string W[8] =
{
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
string B[8] =
{
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};
string b[50];

int Wcnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (b[x + i][y + j] != W[i][j])
                cnt++;
    return cnt;
}
int Bcnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (b[x + i][y + j] != B[i][j])
                cnt++;
    return cnt;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int mini = 2147483647;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    for (int i = 0; i + 8 <= n; i++)
        for (int j = 0; j + 8 <= m; j++)
            mini = min(mini, min(Wcnt(i, j), Bcnt(i, j)));
    cout << mini;
}