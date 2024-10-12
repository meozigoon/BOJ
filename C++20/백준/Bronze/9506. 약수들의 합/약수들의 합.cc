#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	while (1)
	{
		cin >> n;
		if (n == -1)
			break;
		long long sum = 0;
		int cnt = 0;
		vector<bool> ch(n + 1, false);
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				ch[i] = true;
				cnt++;
			}
		}
		if (sum == n)
		{
			cout << n << " = ";
			for (int i = 1; i <= n; i++)
			{
				if (ch[i] == true)
				{
					cout << i;
					cnt--;
					if (cnt != 0)
						cout << " + ";
					else
						cout << '\n';
				}
			}
		}
		else
			cout << n << " is NOT perfect.\n";
	}
}