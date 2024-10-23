#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    int i = 0;
    while (1)
    {
        i++;
        getline(cin, s);
        if (s == "0")
            break;
        cout << "Case " << i << ": Sorting... done!\n";
        s.clear();
    }
}