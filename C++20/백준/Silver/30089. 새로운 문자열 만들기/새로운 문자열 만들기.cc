#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int T;
  cin >> T;
  for (int t = 0; t < T; t++) {
    string S;
    cin >> S;
    auto rev = S;
    reverse(rev.begin(), rev.end());
    auto offset = S.begin();
    while (offset != S.end()) {
      if (equal(offset, S.end(), rev.begin()))
        break;
      offset++;
    }
    S.erase(offset, S.end());
    S += rev;
    cout << S << '\n';
  }
}