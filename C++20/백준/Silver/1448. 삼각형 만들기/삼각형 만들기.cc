#include <iostream>
#include <algorithm>

using namespace std; 

int main(void)
{
    ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
    {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for(int i = n - 1; i > 1; i--)
    {
		if(arr[i] < arr[i - 1] + arr[i - 2])
        {
			int ans = arr[i] + arr[i - 1] + arr[i - 2];
			cout << ans;
			return 0;
		}
	}

	cout << -1;
}