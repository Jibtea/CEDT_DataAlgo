#include "bits/stdc++.h"
#define ll long long
using namespace std;
int n, m;
vector<int> ci;
vector<int> co;

int main() {
  cin >> n >> m;
  vector<vector<int>> adj(n);
  vector<int> dist(n, INT_MAX);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    ci.push_back(a);
  }
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    co.push_back(a);
  }
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
  }
  /// bell ford

  dist[0] = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n; j++) {
      if (dist[j] == INT_MAX)
        continue;
      for (auto w : adj[j]) {
        if (dist[w] > (dist[j] + co[j] + ci[w])) {
          dist[w] = dist[j] + co[j] + ci[w];
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (dist[i] == INT_MAX)
      cout << -1 << " ";
    else
      cout << dist[i] << " ";
  }

  return 0;
}