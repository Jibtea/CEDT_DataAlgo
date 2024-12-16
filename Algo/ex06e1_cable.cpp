#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int findRoot(vector<int>& root, int x) {
  if (root[x] != x) {
    x = findRoot(root, root[x]);
  }
  return x;
}
int main() {
  std::ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int n;
  cin >> n;
  vector<pair<int, pair<int, int>>> v_cost;
  vector<int> root(n);

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int a;
      cin >> a;
      v_cost.push_back({a, {i, j}});
    }
  }

  for (int i = 0; i < n; i++) {
    root[i] = i;
  }

  sort(v_cost.begin(), v_cost.end());
  int sum = 0, e = 0;
  for (int i = 0; i < v_cost.size(); i++) {
    if (e == n - 1) {
      break;
    }
    int a, b;
    a = v_cost[i].second.first;
    b = v_cost[i].second.second;
    a = findRoot(root, a);
    b = findRoot(root, b);
    // cout << a << " " << b << endl;
    if (a != b) {
      root[a] = root[b];
      sum += v_cost[i].first;
      e++;
    }
  }

  cout << sum;

  return 0;
}