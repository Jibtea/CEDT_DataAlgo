#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  int e[n + 1][n + 1];
  for (int i = 1; i < n + 1; i++) {
    for (int j = 1; j < n + 1; j++) {
      cin >> e[i][j];
    }
  }

  vector<int> d(n + 1, 0);
  for (int i = 1; i < n + 1; i++) {
    for (int j = i + 1; j < n + 1; j++) {
      if (e[i][j] == 1)
        d[i]++;
    }
  }

  int k = *max_element(d.begin(), d.end());

  vector<int> sum(k + 1, 0);
  for (int i = 0; i < k + 1; i++) {
    for (int j = 1; j < n + 1; j++) {
      if (d[j] == i)
        sum[i]++;
    }
  }
}