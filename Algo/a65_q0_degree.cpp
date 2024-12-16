#include <bits/stdc++.h>

using namespace std;

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);

  int n;
  cin >> n;
  vector<int> degree;
  int max = 0;
  // vector<vector<int>> max(n, vector<int>(n, 0));
  for (int i = 0; i < n; i++) {
    int sum_d = 0;
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      sum_d += a;
      // max[i][j] = a;
    }
    if (max < sum_d)
      max = sum_d;
    degree.push_back(sum_d);
  }

  for (int i = 0; i <= max; i++) {
    int ans = 0;
    for (auto x : degree) {
      if (x == i)
        ans++;
    }
    cout << ans << " ";
  }

  return 0;
}