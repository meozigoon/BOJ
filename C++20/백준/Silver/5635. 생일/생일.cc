#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct birthday
{
    string name;
    int day = 0, month = 0, year = 0;
};

bool cmp(birthday a, birthday b)
{
    if (a.year > b.year)
        return true;
    if (a.year == b.year && a.month > b.month)
        return true;
    if (a.year == b.year && a.month == b.month && a.day > b.day)
        return true;
    return false;
}

int main(void)
{
    int n;
    cin >> n;
    vector<birthday> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i].name >> b[i].day >> b[i].month >> b[i].year;
    }
    sort(b.begin(), b.end(), cmp);
    cout << b[0].name << '\n' << b[n - 1].name;
}