#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	unsigned long long x;
    cin >> x;
    unsigned long long result = 0;
    unsigned long long tmp;
    for (unsigned long long i = 1; x > 0; i *= 3)
    {
        tmp = x % 2;
        result += tmp * i;
        x /= 2;
    }
    cout << result;
}