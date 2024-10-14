#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL), cout.tie(NULL);
    int n, ans = 0;
    string s;
    cin >> n;
    for(int i = 0;i < n; i++)
    {
        cin >> s;
        ans += s.length();
    }
    cout << ans;
}