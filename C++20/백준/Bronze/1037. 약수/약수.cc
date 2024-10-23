#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num.begin(), num.end());
    cout << num[0] * num[n - 1];
}