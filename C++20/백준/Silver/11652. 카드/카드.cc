#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    map<long long, long long> m;
    long long a;
    long long k = 1;
    while (n--)
    {
        cin >> a;
        if (m.find(a) == m.end())
            m.insert({ a,1 });
        else
            m[a]++;
        k = max(k, m[a]);
    }
    for(auto i : m)
        if (i.second == k)
        {
            cout << i.first;
            break;
        }
}