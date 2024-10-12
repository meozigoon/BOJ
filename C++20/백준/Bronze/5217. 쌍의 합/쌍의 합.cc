#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int tmp;
	vector<int> pair1;
	vector<int> pair2;
	vector<int> cnt(n);
	for (int i = 0; i < n; i++)
		cnt[i] = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		cout << "Pairs for " << tmp << ": ";
		for (int j = 1; j < tmp; j++)
			for (int k = j + 1; k < tmp; k++)
				if (j + k == tmp)
				{
					cnt[i]++;
					pair1.push_back(j);
					pair2.push_back(k);
				}
		for (int j = 0; j < cnt[i]; j++)
		{
			if (j != cnt[i] - 1)
				cout << pair1[j] << ' ' << pair2[j] << ", ";
			else
				cout << pair1[j] << ' ' << pair2[j];
		}
		cout << '\n';
		pair1.clear();
		pair2.clear();
	}
	return 0;
}