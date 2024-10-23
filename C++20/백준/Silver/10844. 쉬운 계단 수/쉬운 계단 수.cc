#include <iostream>
#include <vector>

using namespace std;

long long arr[10][101];

long long zero(int n);
long long one(int n);
long long two(int n);
long long three(int n);
long long four(int n);
long long five(int n);
long long six(int n);
long long seven(int n);
long long eight(int n);
long long nine(int n);
long long all(int n);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    arr[0][1] = 0;
    arr[1][1] = 1;
    arr[2][1] = 1;
    arr[3][1] = 1;
    arr[4][1] = 1;
    arr[5][1] = 1;
    arr[6][1] = 1;
    arr[7][1] = 1;
    arr[8][1] = 1;
    arr[9][1] = 1;
    int n;
    cin >> n;
    cout << all(n);
}

long long zero(int n)
{
    if (arr[0][n] == 0 && n != 1)
        arr[0][n] = one(n - 1) % 1000000000;
    return arr[0][n];
}

long long one(int n)
{
    if (arr[1][n] == 0)
        arr[1][n] = (two(n - 1) + zero(n - 1)) % 1000000000;
    return arr[1][n];
}

long long two(int n)
{
    if (arr[2][n] == 0)
        arr[2][n] = (one(n - 1) + three(n - 1)) % 1000000000;
    return arr[2][n];
}

long long three(int n)
{
    if (arr[3][n] == 0)
        arr[3][n] = (two(n - 1) + four(n - 1)) % 1000000000;
    return arr[3][n];
}

long long four(int n)
{
    if (arr[4][n] == 0)
        arr[4][n] = (three(n - 1) + five(n - 1)) % 1000000000;
    return arr[4][n];
}

long long five(int n)
{
    if (arr[5][n] == 0)
        arr[5][n] = (four(n - 1) + six(n - 1)) % 1000000000;
    return arr[5][n];
}

long long six(int n)
{
    if (arr[6][n] == 0)
        arr[6][n] = (five(n - 1) + seven(n - 1)) % 1000000000;
    return arr[6][n];
}

long long seven(int n)
{
    if (arr[7][n] == 0)
        arr[7][n] = (six(n - 1) + eight(n - 1)) % 1000000000;
    return arr[7][n];
}

long long eight(int n)
{
    if (arr[8][n] == 0)
        arr[8][n] = (seven(n - 1) + nine(n - 1)) % 1000000000;
    return arr[8][n];
}

long long nine(int n)
{
    if (arr[9][n] == 0)
        arr[9][n] = eight(n - 1) % 1000000000;
    return arr[9][n];
}

long long all(int n)
{
    return (zero(n) + one(n) + two(n) + three(n) + four(n) + five(n) + six(n) + seven(n) + eight(n) + nine(n)) % 1000000000;
}
