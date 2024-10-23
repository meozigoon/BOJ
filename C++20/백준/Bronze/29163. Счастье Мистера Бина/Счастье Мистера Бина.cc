#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> num(n);
    int even = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> num[i];
      if (num[i] % 2 == 0)
        even++;
    }
    if (even > n / 2)
        cout << "Happy";
    else
        cout << "Sad";
    return 0;
}