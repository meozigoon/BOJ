#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	queue<int> q;
	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}
	while (q.size() > 1)
	{
		cout << q.front() << ' ';
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
}