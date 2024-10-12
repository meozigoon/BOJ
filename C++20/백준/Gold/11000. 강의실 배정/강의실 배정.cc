#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector< pair<int, int> > cl(n);
    priority_queue< int, vector<int>, greater<int> > pq;
    for (int i = 0; i < n; i++)
    {
        cin >> cl[i].first >> cl[i].second;
    }
    sort(cl.begin(), cl.end());
    pq.push(cl[0].second);
    for (int i = 1; i < n; i++)
    {
        pq.push(cl[i].second);
        if (pq.top() <= cl[i].first)
            pq.pop();
    }
    cout << pq.size();
}