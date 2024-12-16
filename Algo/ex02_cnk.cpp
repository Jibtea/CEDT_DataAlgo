#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> vv(10000, vector<int>(10000, 0));
int func(int n, int k) {
  // cout << "hi";
  if (n == k || k == 0) {
    return 1;
  } else {
    if (vv[n][k] == 0) {
      vv[n][k] = func(n - 1, k - 1) + func(n - 1, k);
    }
  }
  return vv[n][k];
}

int main() {
  int n, k;
  cin >> n >> k;
  cout << func(n, k);
  return 0;
}