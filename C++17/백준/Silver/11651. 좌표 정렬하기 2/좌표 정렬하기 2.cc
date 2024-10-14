#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<vector<int>>xy(n, vector<int>(2));
    for(int i = 0; i < n; i++)
        cin >> xy[i][1] >> xy[i][0];
    sort(xy.begin(), xy.end());
    for(int i = 0; i < n; i++)
        cout << xy[i][1] << ' ' << xy[i][0] << '\n';
    return 0;
}