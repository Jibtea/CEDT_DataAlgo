#include <bits/stdc++.h>

using namespace std;
/// floyd_WARBASUKA
int main() {
  int n;
  cin >> n;
  vector<vector<int>> adjM(n, vector<int>(n, 0));
  vector<int> ans;
  // vector<int> dist(n, 1000001);
  // vector<bool> visited(n, false);
  //  vector<int> prev(n, -1);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      if (a == -1)
        a = 1000001;
      adjM[i][j] = a;
    }
  }

  for (int k = 0; k < n; k++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (adjM[i][j] > adjM[i][k] + adjM[k][j]) {
          adjM[i][j] = adjM[i][k] + adjM[k][j];
        }
      }
    }
  }

  for (int i = 0; i < n; i++) {
    ans.push_back(adjM[0][i]);
  }
  sort(ans.begin(), ans.end(), greater<int>());

  cout << ((ans[0] == 1000001) ? -1 : ans[0]);

  return 0;
}