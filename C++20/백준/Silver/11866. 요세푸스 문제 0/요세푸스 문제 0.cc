#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;
	queue<int> q;
	for (int i = 0; i < n; i++)
		q.push(i + 1);
	cout << '<';
	while (q.size() != 1)
	{
		for (int i = 1; i < k; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << '>';
}