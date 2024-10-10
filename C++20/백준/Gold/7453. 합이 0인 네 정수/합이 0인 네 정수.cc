#include <iostream>
#include <algorithm>

using namespace std;

int n;
long long ans;
long long arr[4][4000], ab[16000000], cd[16000000];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr[j][i];
    int idx = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            ab[idx] = arr[0][i] + arr[1][j];
            cd[idx] = arr[2][i] + arr[3][j];
            idx++;
        }
    sort(ab, ab + idx);
    sort(cd, cd + idx);
    int idx1 = 0;
    int idx2 = idx - 1;
    long long s1, s2;
    int o;
    while (idx1 < idx && idx2 >= 0)
    {
        if (ab[idx1] + cd[idx2] == 0)
        {
            o = idx1;
            s1 = 0, s2 = 0;
            while (ab[idx1] + cd[idx2] == 0)
            {
                if (idx1 >= idx)
                    break;
                s1++;
                idx1++;
            }
            while (ab[o] + cd[idx2] == 0)
            {
                if (idx2 < 0)
                    break;
                s2++;
                idx2--;
            }
            ans += s1 * s2;
        }
        else if (ab[idx1] + cd[idx2] < 0)
            idx1++;
        else
            idx2--;
    }
    cout << ans;
    return 0;
}