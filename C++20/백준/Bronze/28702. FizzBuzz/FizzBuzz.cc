#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    string a, b, c;
    cin >> a >> b >> c;
    int x;
    if (c[0] >= 48 && c[0] <= 57)
    {
        x = stoi(c) + 1;
        if (x % 3 == 0)
        {
            if (x % 5 == 0)
                cout << "FizzBuzz";
            else
                cout << "Fizz";
        }
        else if (x % 5 == 0)
            cout << "Buzz";
        else
            cout << x;
    }
    else if (b[0] >= 48 && b[0] <= 57)
    {
        x = stoi(b) + 2;
        if (x % 3 == 0)
        {
            if (x % 5 == 0)
                cout << "FizzBuzz";
            else
                cout << "Fizz";
        }
        else if (x % 5 == 0)
            cout << "Buzz";
        else
            cout << x;
    }
    else if (a[0] >= 48 && a[0] <= 57)
    {
        x = stoi(a) + 3;
        if (x % 3 == 0)
        {
            if (x % 5 == 0)
                cout << "FizzBuzz";
            else
                cout << "Fizz";
        }
        else if (x % 5 == 0)
            cout << "Buzz";
        else
            cout << x;
    }
    return 0;
}