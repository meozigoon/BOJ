#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int find_maximum_k(const string &front, const string &back) {
  for (int k = min(front.size(), back.size()); k > 0; k--) {
    if (equal(front.end() - k, front.end(), back.begin()))
      return k;
  }
  return 0;
}
int shortest_vaccine(vector<string> &virus, int chosen, string vaccine) {
  if (chosen == virus.size())
    return vaccine.length();
  int minimum = 10 * virus.size();
  for (int choose = chosen; choose < virus.size(); choose++) {
    int k = find_maximum_k(vaccine, virus[choose]);
    swap(virus[chosen], virus[choose]);
    minimum = min(minimum, shortest_vaccine(virus, chosen + 1,
                                            vaccine + virus[chosen].substr(k)));
    swap(virus[chosen], virus[choose]);
  }
  return minimum;
}
int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  int N;
  cin >> N;
  vector<string> virus;
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    virus.push_back(S);
  }
  cout << shortest_vaccine(virus, 0, "") << '\n';
}