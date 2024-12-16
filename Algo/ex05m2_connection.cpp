#include <iostream>
#include <queue>
#include <set>
#include <vector>
using namespace std;

int bfs(const vector<vector<int>>& adj, vector<bool> visited, int n, int k) {
  // มาเช้คลูกตู้มๆๆๆๆๆจนถึงชั้นที่kตู้มๆๆๆๆๆ
  queue<pair<int, int>> q;
  int sum = 1;
  q.push({n, 0});
  visited[n] = true;
  while (!q.empty()) {
    int tmp = q.front().first;
    int floor = q.front().second;
    q.pop();
    for (auto x : adj[tmp]) {
      if (!visited[x] && floor < k) {
        visited[x] = true;
        q.push({x, floor + 1});
        sum++;
      }
    }
  }
  return sum;
}
int main() {
  int n, e, k;
  cin >> n >> e >> k;
  vector<vector<int>> adj(n + 1);
  vector<bool> visited(n + 1, false);
  set<int> sumk_deg;
  while (e--) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  int max = 0;

  for (int i = 0; i < n; i++) {
    int ans = bfs(adj, visited, i, k);
    max = ((max < ans) ? ans : max);
  }

  cout << max;

  return 0;
}