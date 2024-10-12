#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0;i<n;i++)
        cout << v[i] << '\n';
    return 0;
}