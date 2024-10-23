#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++)
    {
        if(i != 0 && v[i] != v[i - 1])
            cout << v[i] << ' ';
        if(i == 0)
            cout << v[i] << ' ';
    }
}