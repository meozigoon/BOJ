#include <iostream>

using namespace std;

long long P[101];

long long Pa(int n)
{
    if (n < 3)
        return 1;
    else if (P[n] == 0)
        P[n] = Pa(n - 2) + Pa(n - 3);
    return P[n];
}
int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << Pa(n - 1) << '\n';
    }
    return 0;
}