#include <iostream>
#include <algorithm>

using namespace std;
 
int main (void) 
{
    int n, m;
    cin >> n >> m;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort (arr, arr + n);
    cout << arr[n - m];
}