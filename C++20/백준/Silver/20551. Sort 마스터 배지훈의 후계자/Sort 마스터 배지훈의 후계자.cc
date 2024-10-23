#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, m;	
	cin >> n >> m;
	vector<int> A(n);
	vector<int> D(m);
	for (int i = 0; i < n; i++)
		cin >> A[i];
	for (int i = 0; i < m; i++)
		cin >> D[i];
	int left = 0;
	int rig = n - 1;
	int ans;
	int mid;
	bool check = false;
	sort(A.begin(), A.end());
	for (int i = 0; i < m; i++)
	{
		left = 0;
		rig = n - 1;
		check = false;
		while (left <= rig)
		{
			mid = (left + rig) / 2;
			if (A[mid] < D[i])
				left = mid + 1;
			else
			{
				ans = mid;
				rig = mid - 1;
			}
			if (A[mid] == D[i])
				check = true;
		}
		if (check)
			cout << ans << '\n';
		else
			cout << -1 << '\n';
	}
}