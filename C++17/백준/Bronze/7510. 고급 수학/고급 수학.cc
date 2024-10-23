#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>v(3);
    for(int i = 0; i < n; i++)
    {
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if(v[0] * v[0] + v[1] * v[1] == v[2] * v[2])
            cout << "Scenario #" << i + 1 << ":\nyes\n\n";
        else
            cout << "Scenario #" << i + 1 << ":\nno\n\n";
    }
    return 0;
}