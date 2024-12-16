#include <bits/stdc++.h>

using namespace std;
struct name {
  int to;
  int weight;
  bool operator<(const name& other) const { return other.weight < weight; };
};

void dijkstra(int s, vector<int>& dist, vector<vector<name>>& adj) {
  //
  priority_queue<name> PQ;
  dist[s] = 0;
  PQ.push({s, 0});
  while (!PQ.empty()) {
    name tmp = PQ.top();
    PQ.pop();
    if (tmp.weight > dist[tmp.to]) {
      continue;
    }
    for (auto x : adj[tmp.to]) {
      if (dist[tmp.to] + x.weight < dist[x.to]) {
        dist[x.to] = dist[tmp.to] + x.weight;
        PQ.push({x.to, dist[x.to]});
      }
    }
  }
}
int main() {
  int n, e;
  cin >> n >> e;
  vector<int> dist(n, INT_MAX);
  vector<vector<name>> adj(n);
  for (int i = 0; i < e; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back({b, c});
    adj[b].push_back({a, c});
    /// now(a) node ->b w=c
  }

    return 0;
}