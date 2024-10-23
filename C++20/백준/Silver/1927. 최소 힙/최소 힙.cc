#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	priority_queue<int, vector<int>, greater<int>> pq;
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		if (n != 0)
			pq.push(n);
		else
		{
			if (pq.empty())
				cout << 0 << "\n";
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
	}
}