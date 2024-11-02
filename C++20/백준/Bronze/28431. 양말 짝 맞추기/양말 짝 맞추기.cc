#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	int arr[10] = { 0, };
	int n;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		arr[n]++;
	}
	for (int i = 0; i < 10; i++)
		if (arr[i] & 1)
			cout << i;
	return 0;
}