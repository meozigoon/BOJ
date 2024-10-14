#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int N;
  cin >> N;
  vector<int> L(N);
  for (int i = 0; i < N; i++) {
    cin >> L[i];
  }
  sort(L.begin(), L.end());
  map<int, long long> maximum_area;
  int i = 0;
  while (i < N) {
    int j = i;
    while (j < N && L[i] == L[j]) {
      j++;
    }
    maximum_area[L[i] + L[i]] += (long long)L[i] * L[i] * ((j - i) / 2);
    vector<bool> paired(N);
    while (i < j) {
      int k = j;
      while (k < N) {
        int l = k;
        while (l < N && L[k] == L[l]) {
          l++;
        }
        while (k < l) {
          if (!paired[k]) {
            paired[k] = true;
            maximum_area[L[i] + L[k]] += (long long)L[i] * L[k];
            break;
          }
          k++;
        }
        k = l;
      }
      i++;
    }
    i = j;
  }
  long long answer = 0;
  for (auto [sum, product] : maximum_area) {
    answer = max(answer, product);
  }
  cout << answer << '\n';
}