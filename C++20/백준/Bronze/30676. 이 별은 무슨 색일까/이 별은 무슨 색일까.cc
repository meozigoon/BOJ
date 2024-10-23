#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int a[7] = { 425, 450, 495, 570, 590, 620, 781 };
    string s[7] = { "Violet", "Indigo", "Blue", "Green", "Yellow", "Orange", "Red" };
    int n;
    cin >> n;
    cout << s[upper_bound(a, a + 7, n) - a];
}