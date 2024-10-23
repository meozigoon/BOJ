#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(NULL), cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	int k;
	int tmp;
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		max = 0;
		cin >> k;
		vector<int> sc(k);
		for (int j = 0; j < k; j++)
		{
			cin >> sc[j];
		}
		sort(sc.begin(), sc.end());
		cout << "Class " << i + 1 << "\nMax " << sc[k - 1] << ", Min " << sc[0] << ", " << "Largest gap ";
		for (int j = 0; j < k - 1; j++)
		{
			if (sc[j + 1] - sc[j] > max)
				max = sc[j + 1] - sc[j];
		}
		cout << max << '\n';
	}
}