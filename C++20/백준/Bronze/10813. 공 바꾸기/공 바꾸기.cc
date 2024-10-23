#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
    int p, q;
    while (m--)
    {
        cin >> p >> q;
        swap(arr[p - 1], arr[q - 1]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}