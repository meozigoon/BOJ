#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    int min, max;
    cin >> n >> m;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> min >> max;
        cout << arr[max] - arr[min - 1] << '\n';
    }
}