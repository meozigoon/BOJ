#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> num;
    num.reserve(n);
    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == 0)
            num.pop_back();
        else
            num.push_back(tmp);
    }
    int ans = 0;
    for (int i = 0; i < num.size(); i++)
        ans += num[i];
    cout << ans;
}