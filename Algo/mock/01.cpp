#include <bits/stdc++.h>

using namespace std;

int findRoot(vector<int>& root, int x) {
  if (root[x] != -1) {
    root[x] = findRoot(root, root[x]);
    return root[x];
  }
  return x;
}

void unionSet(vector<int>& root, int s1, int s2, vector<int>& sizes) {
  // int p_s1 = findRoot(root, s1);
  // int p_s2 = findRoot(root, s2);
  if (sizes[s1] > sizes[s2]) {
    root[s2] = s1;
    sizes[s1] += sizes[s2];
  } else {
    root[s1] = s2;
    sizes[s2] += sizes[s1];
  }
}

int main() {
  std::ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  int n, m;
  cin >> n >> m;
  vector<pair<int, pair<int, int>>> v_cost;
  vector<int> root(n, -1);
  vector<int> sizes(n, 1);

  for (int i = 0; i < m; i++) {
    int a, b, c;
    cin >> c >> b >> a;
    v_cost.push_back({c, {b, a}});
  }
  sort(v_cost.begin(), v_cost.end());
  int sum = 0, e = 0;
  for (int i = 0; i < v_cost.size(); i++) {
    int a, b;
    a = v_cost[i].second.first;
    b = v_cost[i].second.second;
    a = findRoot(root, a);
    b = findRoot(root, b);
    if (a != b) {
      // root[a] = root[b];
      unionSet(root, a, b, sizes);
      sum += v_cost[i].first;
      e++;
    }
  }

  cout << sum;

  return 0;
}
