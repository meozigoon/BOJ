#include <iostream>
#include <vector>

using namespace std;

int n, m;
int q[102];
int ans;

void cntq(int x)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
        if ((q[i] & x) == q[i])
            cnt++;
    ans = max(ans, cnt);
}

void sol(int i, int d, int cnt)
{
    if (cnt == n)
    {
        cntq(i);
        return;
    }
    else if (d == 2 * n + 1)
        return;
    else
    {
        sol(i, d + 1, cnt);
        i |= 1 << d;
        sol(i, d + 1, cnt + 1);
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int k, a;
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < k; j++)
        {
            cin >> a;
            q[i] |= 1 << a;
        }
    sol(0, 1, 0);
    cout << ans;
    return 0;
}