#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    
    int m;
    cin >> m;
    int idx;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        idx = lower_bound(arr.begin(), arr.end(), tmp) - arr.begin(); // key가 너무 커서... arr.end() - arr.begin()
        
        if (idx != n && arr[idx] == tmp)
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }
}