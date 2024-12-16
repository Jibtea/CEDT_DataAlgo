#include <iostream>
#include <vector>
using namespace std;
/// หาจำนวน nodeที่deg==2 ผิด กร้ดดดดดดดดดด
bool dfs(const vector<vector<int>>& adj, vector<bool>& visited, int n) {
  //
  visited[n] = true;
  for (auto ne : adj[n]) {
    if (!visited[ne] && adj[ne].size() <= 2) {
      dfs(adj, visited, ne);
    } else {
      return false;
    }
  }
  return true;
}
int main() {
  int v, e;
  cin >> v >> e;
  vector<vector<int>> adj(v + 1);
  vector<bool> visited(v + 1, false);
  while (e--) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int sum = 0;

  for (int i = 0; i < v; i++) {
    if (!visited[i] && adj[i].size() <= 2) {
      if (dfs(adj, visited, i))
        sum++;
    }
  }
  cout << sum;

  return 0;
}