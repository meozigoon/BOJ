#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int num, sum;
    while (1)
    {
        cin >> num;
        if (!num)
            break;
        vector<int> arr(num);
        int ma = 0;
        for (int i = 0; i < num; i++)
            cin >> arr[i];
        for (int i = 0; i < num - 2; i++)
        {
            sum = arr[i] + arr[i + 1] + arr[i + 2];
            ma = max(ma, sum);
        }
        cout << ma << '\n';
    }
    return 0;
}