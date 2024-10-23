#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
    long long n, a[333][333] = { 0 }, b[333][333] = { 0 };
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> b[i][j];
    long long cnt = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (long long k = 1; k <= n; k++)
                if (a[i][k] && b[k][j])
                {
                    cnt++;
                    break;
                }
    cout << cnt;
    return 0;
}