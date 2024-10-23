#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        getline(cin, s);
        cout << i << ". " << s << '\n';
    }
}