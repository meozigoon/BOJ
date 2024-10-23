#include <iostream>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	bool vis[1001] = { false, };
	int cnt = 0; 
	for (int i = 2; i <= n; i++)
    {
		if (vis[i] == true)
			continue;
		for (int j = i; j <= n; j += i)
        {
			if (vis[j] == false)
            {
				vis[j] = true;
				cnt++;
				if (cnt == k)
                {
					cout << j << "\n";
					return 0;
				}
			}
		}
	}
}