#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
void dfs(const vector<vector<int>>& adj, vector<bool>& visited, int n) {
  //
  visited[n] = true;
  for (auto neighbor : adj[n]) {
    if (!visited[neighbor]) {
      dfs(adj, visited, neighbor);
    }
  }
}

void bfs(const vector<vector<int>>& adj, vector<bool>& visited, int n) {
  //
  queue<int> q;
  q.push(n);
  visited[n] = true;

  while (!q.empty()) {
    int tmp = q.front();
    q.pop();
    for (auto x : adj[tmp]) {
      if (!visited[x]) {
        q.push(x);
        visited[x] = true;
      }
    }
  }
}

void dfs2(const vector<vector<int>>& adj, vector<bool>& visited, int n) {
  //
  stack<int> sstack;
  sstack.push(n);
  visited[n] = true;

  while (!sstack.empty()) {
    int tmp = sstack.top();
    sstack.pop();

    for (auto x : adj[tmp]) {
      if (!visited[x]) {
        sstack.push(x);
        visited[x] = true;
      }
    }
  }
}

int main() {
  int n, e, sum = 0;
  cin >> n >> e;
  vector<vector<int>> adj(n + 1);
  vector<bool> visited(n + 1, false);
  while (e--) {
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      sum++;
      // dfs(adj, visited, i);
      bfs(adj, visited, i);
    }
  }

  cout << sum;

  return 0;
}