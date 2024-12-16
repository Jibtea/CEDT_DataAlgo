#include <bits/stdc++.h>

using namespace std;
struct name {
  int to;
  int weight;
  bool operator<(const name& other) const { return other.weight < weight; };
};

void dijkstra(vector<vector<int>>& adjM, vector<vector<int>>& dist) {}

int main() {
  int r, c;
  cin >> r >> c;
  vector<vector<int>> adjM(r, vector<int>(c, 0));
  vector<vector<int>> dist(r, vector<int>(c, INT_MAX));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      int a;
      cin >> a;
      // adjM[i][j] = a;
    }
  }

  dist[0][0] = 0;

  return 0;
}