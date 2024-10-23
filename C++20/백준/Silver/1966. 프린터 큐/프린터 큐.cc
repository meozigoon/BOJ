#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int cnt = 0;
    int t;
    cin >> t;
    int n, m, ipt;
    for (int i = 0; i < t; ++i)
    {
        cnt = 0;
        cin >> n >> m;
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        for (int j = 0; j < n; j++)
        {
            cin >> ipt;
            q.push({ j, ipt });
            pq.push(ipt);
        }
        int idx;
        int val;
        while (!q.empty())
        {
            idx = q.front().first;
            val = q.front().second;
            q.pop();
            if (pq.top() == val)
            {
                pq.pop();
                cnt++;
                if (idx == m)
                {
                    cout << cnt << '\n';
                    break;
                }
            }
            else
                q.push({ idx, val });
        }
    }
}