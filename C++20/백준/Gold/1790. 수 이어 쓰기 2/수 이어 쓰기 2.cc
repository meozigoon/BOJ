#include <iostream>

using namespace std;

int main(void)
{

    long long n, k, calk;
    long long totalnum = 0;
    long long numcount = 9;
    long long numlength = 1;
    long long tenten = 1;
    long long result;
    cin >> n >> k;
    calk = k;
    while (calk > numcount * numlength)
    {
        totalnum += numcount;
        calk -= numcount * numlength;
        numcount *= 10;
        numlength++;
    }
    totalnum += (calk - 1) / numlength + 1;
    if (totalnum > n)
        result = -1;
    else
    {
        long long temp = (calk - 1) % numlength + 1;
        for (int i = 0; i < numlength - 1; i++)
            tenten *= 10;
        for (int i = 0; i < temp; i++)
        {
            result = totalnum / tenten;
            totalnum %= tenten;
            tenten /= 10;
        }
    }
    cout << result;
}