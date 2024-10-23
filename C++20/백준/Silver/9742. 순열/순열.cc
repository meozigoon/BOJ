#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int fa[11];

int f(int n)
{
    if (n == 1)
        fa[n] = 1;
    else
        fa[n] = f(n - 1) * n;
    return fa[n];
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    int n;
    int cnt;
    while (cin >> s >> n)
    {
        cout << s << ' ' << n << " = ";
        if (n > f(s.length()))
        {
            cout << "No permutation\n";
            continue;
        }
        n--;
        while (n--)
            next_permutation(s.begin(), s.end());
        for (char c : s)
            cout << c;
        cout << '\n';
    }
}