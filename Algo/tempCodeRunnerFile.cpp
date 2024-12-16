#include <bits/stdc++.h>

using namespace std;

void dijkstra(int s, vector<int>& dist, vector<vector<pair<int, int>>>& adj) {
  priority_queue<pair<int, int>> PQ;
  dist[s] = 0;
  // dist,node
  PQ.push({0, s});
  while (!PQ.empty()) {
    int weight = PQ.top().first, node = PQ.top().second;
    PQ.pop();
    // cout << weight << " " << node << endl;
    if (weight > dist[node]) {
      continue;
    }
    for (auto x : adj[node]) {
      // cout << "d";
      if (dist[node] + x.first < dist[x.second]) {
        dist[x.second] = dist[node] + x.first;
        PQ.push({dist[x.second], x.second});
      }
    }
  }

  ///
}

int main() {
  int n, c;
  cin >> n >> c;
  vector<vector<pair<int, int>>> adj(701);

  for (int i = n - 2; i <= n; i++) {
    int k;
    cin >> k;
    while (k--) {
      int a, b;
      cin >> a >> b;
      adj[i].push_back({b, a});
      adj[a].push_back({b, i});
    }
    vector<int> dist(i + 1, INT_MAX);
    dist[2] = c;
    dijkstra(1, dist, adj);
    // cout << "D " << dist[2] << "D ";
    cout << dist[2] << " ";
  }

  return 0;
}