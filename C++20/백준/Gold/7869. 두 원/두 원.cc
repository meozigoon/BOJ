#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    double x1, x2, y1, y2, r1, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    const double PI = acos(-1);
    cout << fixed;
    cout.precision(3);
    if (r1 + r2 <= d)
        cout << (double)0;
    else
    {
        if (abs(r1 - r2) >= d)
            cout << min(r1, r2) * min(r1, r2) * PI;
        else
        {
            double s1 = (r1 * r1 * (acos((r1 * r1 + d * d - r2 * r2) / (2 * r1 * d)))) - (r1 * r1 * sin(2 * (acos((r1 * r1 + d * d - r2 * r2) / (2 * r1 * d)))) / 2);
            double s2 = (r2 * r2 * (acos((r2 * r2 + d * d - r1 * r1) / (2 * r2 * d)))) - (r2 * r2 * sin(2 * (acos((r2 * r2 + d * d - r1 * r1) / (2 * r2 * d)))) / 2);
            cout << s1 + s2;
        }
    }
}