#include <bits/stdc++.h>

using namespace std;

int count(int& n, vector<int>& piggy) {
  // vector<int> vv;
  int time = 0;
  int truf = 0;
  while (truf < n) {
    time++;
    for (int i = 0; i < piggy.size(); i++) {
      if (time % piggy[i] == 0) {
        truf++;
      }
    }
  }
  return time;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> piggy;
  for (int i = 0; i < m; i++) {
    int a;
    cin >> a;
    piggy.push_back(a);
  }

  cout << count(n, piggy);
  return 0;
}
