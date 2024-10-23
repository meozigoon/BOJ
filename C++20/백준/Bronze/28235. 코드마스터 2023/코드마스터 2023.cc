#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string s;
    cin >> s;
    if (s == "SONGDO")
        cout << "HIGHSCHOOL";
    if (s == "CODE")
        cout << "MASTER";
    if (s == "2023")
        cout << "0611";
    if (s == "ALGORITHM")
        cout << "CONTEST";
}