#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int>a(8);
    for(int i = 0; i < 8; i++)
        cin >> a[i];
    vector<int>k(8);
    for(int i = 0; i < 8; i++)
        k[i] = a[i];
    sort(k.begin(), k.end(), greater<int>());
    int sum = k[0] + k[1] + k[2] + k[3] + k[4];
    cout << sum << '\n';
    vector<int>num(5);
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 8; j++)
            if(a[j] == k[i])
                num[i] = j + 1;
    sort(num.begin(), num.end());
    for(int i = 0; i < 5; i++)
        cout << num[i] << ' ';
    return 0;
}