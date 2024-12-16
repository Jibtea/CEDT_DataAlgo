#include <bits/stdc++.h>

using namespace std;
/// floyd_WARBASUKA
int main() {
  int n, s, e;
  cin >> n >> e >> s;
  // vector<vector<int>> adjM(n, vector<int>(n, 0));
  vector<vector<pair<int, int>>> adj(n + 1);
  vector<int> dist(n + 1, INT_MAX);

  /////v_e[v]={weight,w}
  for (int i = 0; i < e; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back({c, b});
    // adj[b].push_back({c, a});
  }
  /// bell ford

  dist[s] = 0;
  for (int i = 0; i < n - 1; i++) {
    // cout << "hi";
    for (int j = 0; j < n; j++) {
      if (dist[j] == INT_MAX)
        continue;
      for (auto w : adj[j]) {
        /// every adj[j]
        // cout << "dist[j] " << dist[j] << " adj[j][w.second] " << w.first<<
        // endl;

        if (dist[w.second] > (dist[j] + w.first)) {
          /// update
          dist[w.second] = dist[j] + w.first;
        }
      }
    }
  }
  // check cycle
  bool negativeCycle = false;
  // int negativeCycle = 0;
  for (int j = 0; j < n; j++) {
    for (auto w : adj[j]) {
      /// every adj[j]
      if (dist[w.second] > (dist[j] + w.first)) {
        /// update
        negativeCycle = true;
        // negativeCycle++;
      }
    }
  }
  // cout << negativeCycle << " dl ";
  if (negativeCycle) {
    cout << -1;
  } else {
    for (int i = 0; i < n; i++) {
      cout << dist[i] << " ";
    }
  }

  return 0;
}