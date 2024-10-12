#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int* w = new int[n];
    int* h = new int[n];
    int* cnt = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> h[i];
        cnt[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (w[i] < w[j] && h[i] < h[j])
            {
                cnt[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << cnt[i] << ' ';
    delete w, h, cnt;
}