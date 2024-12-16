#include <bits/stdc++.h>

using namespace std;

bool cycle_dfs(vector<vector<int>>& adj,
               vector<bool>& vistited,
               int n,
               int prev) {
  //
  vistited[n] = true;
  for (auto neighbor : adj[n]) {
    if (!vistited[neighbor]) {
      //
      if (cycle_dfs(adj, vistited, neighbor, n))
        return true;
    } else {
      if (prev != neighbor) {
        return true;
      }
    }
  }
  return false;
}

int main() {
  int n;
  cin >> n;
  while (n--) {
    int v, e;
    cin >> v >> e;
    vector<vector<int>> adj(v + 1);
    vector<bool> vistited(v + 1, false);
    for (int i = 0; i < e; i++) {
      int a, b;
      cin >> a >> b;
      adj[a].push_back(b);
      adj[b].push_back(a);
    }
    ///////collect/////////
    bool check = false;
    for (int i = 0; i < v; i++) {
      if (!vistited[i]) {
        if ((cycle_dfs(adj, vistited, i, -1))) {
          check = true;
          break;
        }
      }
    }
    cout << ((check) ? "YES" : "NO") << "\n";
  }

  return 0;
}