#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	priority_queue<int> pq;
	int n;
	cin >> n;
	int x;
	while (n--)
	{
		cin >> x;
		if (x == 0)
		{
			if (pq.empty())
				cout << 0 << '\n';
			else
			{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		if (x > 0)
			pq.push(x);
	}
}