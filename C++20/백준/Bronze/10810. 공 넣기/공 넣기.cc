#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> arr(n, 0);
    int p, q, r;
    while (m--)
    {
        cin >> p >> q >> r;
        for (int i = p; i <= q; i++)
            arr[i - 1] = r;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}