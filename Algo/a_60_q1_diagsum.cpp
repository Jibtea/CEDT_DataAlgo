#include <iostream>
#include <vector>
using namespace std;

void func(vector<vector<int>>& adjM, vector<int>& sum, int max) {}
int main() {
  int n;
  cin >> n;
  vector<vector<int>> adjM(n, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int a;
      cin >> a;
      adjM[i][j] = a;
    }
  }
  int max = -1000;

  return 0;
}