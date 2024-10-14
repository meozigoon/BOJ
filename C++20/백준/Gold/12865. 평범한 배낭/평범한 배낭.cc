#include <iostream>
#include <vector>

using namespace std;

int n, k, b[105][100005] = { 0, };

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    vector <pair<int, int>> v;
    cin >> n >> k;
    int x, y;
    v.push_back({ 0,0 });
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({ x,y });
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
        {
            if (v[i].first <= j)
            {
                if ((v[i].second + b[i - 1][j - v[i].first]) > b[i - 1][j])
                    b[i][j] = v[i].second + b[i - 1][j - v[i].first];
                else
                    b[i][j] = b[i - 1][j];
            }
            else
                b[i][j] = b[i - 1][j];
        }
    cout << b[n][k];
    return 0;
}