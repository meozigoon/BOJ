#include <iostream>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    for (long long a = 2; a <= 100; a++)
        for (long long b = 2; b < a; b++)
            for (long long c = b + 1; c < a; c++)
                for (long long d = c + 1; d < a; d++)
                    if (a * a * a == b * b * b + c * c * c + d * d * d)
                        cout << "Cube = " << a << ", Triple = (" << b << ',' << c << ',' << d << ")\n";
    return 0;
}