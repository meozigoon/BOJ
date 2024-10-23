#include<iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if(s.length()>=6 && s.length()<=9)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}