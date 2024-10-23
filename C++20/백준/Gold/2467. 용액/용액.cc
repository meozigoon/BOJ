#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    cin >> N;
    vector<int> answer(2);
    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
        cin >> arr[i];
    int start = 0;
    int end = N - 1;
    int min = 2000000000;
    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (min > abs(sum))
        {
            min = abs(sum);
            answer[0] = arr[start];
            answer[1] = arr[end]; 
            if (sum == 0)
                break;
        }
        if (sum < 0) 
            start++;
        else 
            end--;
    }
    cout << answer[0] << ' ' << answer[1];
}