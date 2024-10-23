#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
    map <string,int> m;
    int n, cnt ;
    cin >> n;
    while (n--)
    {
        string book;
        cin >> book;
        m[book]++;
    }
    for (auto i : m)
        cnt = max(cnt, i.second);
    for (auto i : m)
    {
        if (i.second == cnt)
        {
            cout << i.first; 
            return 0;
        }
    }
    
}