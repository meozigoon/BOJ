#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);

	int n;  cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];
	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++) cout<< arr[i]<<' ';

}