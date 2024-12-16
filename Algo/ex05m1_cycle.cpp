#include <bits/stdc++.h>

using namespace std;
bool dfs(int n,
         vector<vector<int>>& vv,
         vector<bool>& visited,
         int start,
         int back) {
  visited[n] = true;
  for (auto b : vv[n]) {
    if (!visited[b]) {
      dfs(b, vv, visited, start, n);
    }
    if (b == start) {
      return true;
    }
  }
  return false;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, e;
    cin >> n >> e;
    vector<vector<int>> vv(n);
    vector<bool> visited(n, false);
    for (int i = 0; i < e; i++) {
      int a, b;
      cin >> a >> b;
      vv[a].push_back(b);
      vv[b].push_back(a);
    }
    ////////check
    bool check = false;
    for (int i = 0; i < n; i++) {
      if (!visited[i]) {
        if (dfs(i, vv, visited, i, -1)) {
          check = true;
          break;
        }
      }
    }
    (check) ? cout << "YES" << endl : cout << "NO" << endl;
  }
  return 0;
}