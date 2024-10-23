#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>a(100001);

int main()
{
	int n;
	int cnt = 0;
	cin >> n;
	while (n != 0)
	{
		a[cnt] = n % 10;
		cnt++;
		n /= 10;
	}
	sort(a.begin(), a.end(), greater<int>());
	for (int i = 0; i < cnt; i++)
		cout << a[i];
	return 0;
}