#include <iostream>

using namespace std;

int dp[10][1001];

int zero(int n);
int one(int n);
int two(int n);
int three(int n);
int four(int n);
int five(int n);
int six(int n);
int seven(int n);
int eight(int n);
int nine(int n);
int all(int n);

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    dp[0][1] = 1;
    dp[1][1] = 1;
    dp[2][1] = 1;
    dp[3][1] = 1;
    dp[4][1] = 1;
    dp[5][1] = 1;
    dp[6][1] = 1;
    dp[7][1] = 1;
    dp[8][1] = 1;
    dp[9][1] = 1;
    int n;
    while (t--)
    {
        cin >> n;
        cout << all(n) << '\n';
    }
}

int zero(int n)
{
    if (dp[0][n] == 0)
        dp[0][n] = seven(n - 1) % 1234567;
    return dp[0][n];
}

int one(int n)
{
    if (dp[1][n] == 0)
        dp[1][n] = (two(n - 1) + four(n - 1)) % 1234567;
    return dp[1][n];
}

int two(int n)
{
    if (dp[2][n] == 0)
        dp[2][n] = (one(n - 1) + five(n - 1) + three(n - 1)) % 1234567;
    return dp[2][n];
}

int three(int n)
{
    if (dp[3][n] == 0)
        dp[3][n] = (two(n - 1) + six(n - 1)) % 1234567;
    return dp[3][n];
}

int four(int n)
{
    if (dp[4][n] == 0)
        dp[4][n] = (one(n - 1) + five(n - 1) + seven(n - 1)) % 1234567;
    return dp[4][n];
}

int five(int n)
{
    if (dp[5][n] == 0)
        dp[5][n] = (two(n - 1) + four(n - 1) + six(n - 1) + eight(n - 1)) % 1234567;
    return dp[5][n];
}

int six(int n)
{
    if (dp[6][n] == 0)
        dp[6][n] = (nine(n - 1) + five(n - 1) + three(n - 1)) % 1234567;
    return dp[6][n];
}

int seven(int n)
{
    if (dp[7][n] == 0)
        dp[7][n] = (four(n - 1) + eight(n - 1) + zero(n - 1)) % 1234567;
    return dp[7][n];
}

int eight(int n)
{
    if (dp[8][n] == 0)
        dp[8][n] = (seven(n - 1) + five(n - 1) + nine(n - 1)) % 1234567;
    return dp[8][n];
}

int nine(int n)
{
    if (dp[9][n] == 0)
        dp[9][n] = (eight(n - 1) + six(n - 1)) % 1234567;
    return dp[9][n];
}

int all(int n)
{
    return (zero(n) + one(n) + two(n) + three(n) + four(n) + five(n) + six(n) + seven(n) + eight(n) + nine(n)) % 1234567;
}