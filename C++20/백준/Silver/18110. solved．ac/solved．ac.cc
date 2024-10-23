#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cnt, sum;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    if (n == 0)
    {
        cout << 0;
        return 0;
    }
    for (int i = 0; i < n; i++)
        cin >> v[i];  
    sort(v.begin(), v.end());
    double num = (double)n * 15 / 100;
    int val = num;
    if (num - val >= 0.5)
        val++;
    for (int i = val; i < n - val; i++)
    {
        sum += v[i];
        cnt++;
    }
    double avg = (double)sum / (double)cnt;
    int avg2 = avg;
    if (avg - avg2 >= 0.5)
        avg2++;
    cout << avg2;
    return 0;
}