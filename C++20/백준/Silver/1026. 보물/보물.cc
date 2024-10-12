#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct book
{
	string name;
	int p;
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> f(n);
	vector<int> s(n);
	for (int i = 0; i < n; i++)
		cin >> f[i];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	sort(f.begin(), f.end());
	sort(s.begin(), s.end());
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n; i++)
		sum1 += f[i] * s[n - i - 1];
	for (int i = 0; i < n; i++)
		sum2 += f[n - i - 1] * s[i];
	cout << min(sum1, sum2);
}