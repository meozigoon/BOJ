#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    double w, h;
    cin >> w >> h;
    if (w / (h * h) > 25)
        cout << "Overweight";
    else if (w / (h * h) > 18.5)
        cout << "Normal weight";
    else
        cout << "Underweight";
    return 0;
}