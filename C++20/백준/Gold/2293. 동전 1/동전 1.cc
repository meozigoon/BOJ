#include <iostream>
#include <vector>

using namespace std;

int arr[10001];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    arr[0] = 1;
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        for (int j = v[i]; j <= k; j++)
            arr[j] += arr[j - v[i]];
    cout << arr[k];
}