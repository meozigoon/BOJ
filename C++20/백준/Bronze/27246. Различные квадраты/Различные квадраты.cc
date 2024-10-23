#include <iostream>

using namespace std;

int main(void)
{
  ios::sync_with_stdio(false);
  cin.tie(NULL), cout.tie(NULL);
  long long n;
  cin >> n;
  long long max = 0, k = 1;
  while (n >= k * k)
  {
    n -= k * k;
    max++;
    k++;
  }
  cout << max;
}