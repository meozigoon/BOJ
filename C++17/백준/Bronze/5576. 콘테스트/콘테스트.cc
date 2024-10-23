#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    vector<int>a(10);
    vector<int>b(10);
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++)
        cin >> b[i];
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    int ansa = 0, ansb = 0;
    for (int i = 0; i < 3; i++)
    {
        ansa += a[i];
        ansb += b[i];
    }
    cout << ansa << ' ' << ansb;
    return 0;
}