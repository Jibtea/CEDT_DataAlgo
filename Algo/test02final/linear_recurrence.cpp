#include "bits/stdc++.h"
#define ll long long
using namespace std;
vector<ll> table(1001, 0);
vector<ll> c, a;
int n, k;
// k = 2, c1 = c2 = 1, a0 = 0
ll R(int n) {
  if (n < k) {
    return a[n] % 32717;
  }
  if (table[n] == 0) {
    for (int i = 1; i <= k; i++) {
      table[n] += ((c[i] * R(n - i) % 32717));
    }
    return table[n] % 32717;
  } else {
    return table[n] % 32717;
  }
}
int main() {
  cin >> k >> n;
  c.push_back(0);
  for (int i = 0; i < k; i++) {
    int C;
    cin >> C;
    c.push_back(C);
  }
  for (int i = 0; i < k; i++) {
    int A;
    cin >> A;
    a.push_back(A);
  }

  cout << R(n) % 32717;

  return 0;
}