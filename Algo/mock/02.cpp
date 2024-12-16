#include <bits/stdc++.h>

using namespace std;
vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> grid(m, vector<int>(m));
  vector<pair<int, int>> treasure;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
      if (grid[i][j] == 2) {
        treasure.push_back({i, j});
      }
    }
  }
  //////
  vector<vector<bool>> visited(n, vector<bool>(m, false));
  vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
  queue<pair<int, int>> q;
  q.push({0, 0});
  dist[0][0] = 0;

  while (!q.empty()) {
    int row = q.front().first, col = q.front().second;
    q.pop();
    if (visited[row][col])
      continue;
    visited[row][col] = true;
    /////////////
    for (auto [dr, dc] : dir) {
      int cr = row + dr;
      int cc = col + dc;
      if (cr < 0 || cc < 0 || cr >= n || cc >= m)
        continue;
      if (grid[cr][cc] == 0)
        continue;
      if (visited[cr][cc])
        continue;
      dist[cr][cc] = dist[row][col] + 1;
      q.push({cr, cc});
    }
  }
  ////////////
  long long sum = 0;
  for (int i = 0; i < treasure.size(); i++) {
    sum += dist[treasure[i].first][treasure[i].second] * 2;
  }

  cout << sum;
  return 0;
}