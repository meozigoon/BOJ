#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int t;
	cin >> t;
	cout << "Gnomes:\n";
	vector<int> b(3);
	while (t--)
	{
		for (int i = 0; i < 3; i++)
			cin >> b[i];
		if ((b[1] - b[0]) * (b[2] - b[1]) > 0)
			cout << "Ordered\n";
		else
			cout << "Unordered\n";
	}
	return 0;
}