#include "bits/stdc++.h"

using namespace std;

int main() {
  int n;
  cin >> n;
  // priority_queue<pair<int, pair<int, int>>> weight;
  vector<bool> visited(n + 1, false);
  vector<vector<int>> adj(n + 1, vector<int>(n + 1, -1));
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      int a;
      cin >> a;
      adj[i][j] = a;
      // weight.push({a, {i, j}});
      //  weight.push({a, {j,i}});
    }
  }

  //////prim's
  int sum = 0, e = 0;
  for (int i = 0; i < n; i++) {
    if (!visited[i]) {
      visited[i] = true;
      priority_queue<int> PQ;
      PQ.push(adj[i][i + 1]);
      while (!PQ.empty()) {
        int tmp = PQ.top();
        PQ.pop();
        for (auto j : adj[i]) {
          if (!visited[j] && adj[i][j] != -1) {
            sum += tmp;
            PQ.push({adj[i][j]});
            visited[j] = true;
          }
        }
      }
    }
  }

  cout << sum;

  return 0;
}