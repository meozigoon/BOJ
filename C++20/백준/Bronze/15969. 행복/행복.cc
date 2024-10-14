#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> sc;
	sc.reserve(n);
	int tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		sc.push_back(tmp);
	}
	sort(sc.begin(), sc.end());
	cout << sc[sc.size() - 1] - sc[0];
	return 0;
}
