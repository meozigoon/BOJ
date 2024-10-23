#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    char c;
    for(int i = 0; i < n; i++)
    {
        c = s[i];
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cnt++;
                break;
        }
    }
    cout << cnt;
}