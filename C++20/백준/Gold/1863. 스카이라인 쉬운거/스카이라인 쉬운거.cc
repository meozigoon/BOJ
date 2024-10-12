#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int i, n, x, y, b = 0, tmp;
    cin >> n;
    vector<int> sky(n);
    stack<int> s;
    for (i = 0; i < n; i++)
        cin >> x >> sky[i];

    for (i = 0; i < n; i++)
    {
        tmp = sky[i];
        while (!s.empty() && s.top() > tmp)
        {
            if (s.top())
                b++;
            s.pop();
        }
        if (!s.empty() && s.top() == tmp)
            continue;
        s.push(tmp);
    }
    while (!s.empty())
    {
        if (s.top())
            b++;
        s.pop();
    }
    cout << b;
}