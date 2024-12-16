#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll func(ll n) {
  //
  // vector<ll> sum(n + 1, 0);
  ll sum[2];
  sum[0] = 1;
  for (ll i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      sum[0] = ((2 * (sum[0])) + 1) % 1000000007;
      // sum[i] = ((2 * (sum[i - 1])) + 1) % 1000000007;
    } else
      sum[0] = ((2 * (sum[0])) - 1) % 1000000007;
    // sum[i] = ((2 * (sum[i - 1])) - 1) % 1000000007;
    // cout << "i=" << i << " sum[i]=" << sum[i] << endl;
  }
  return sum[0];
}
int main() {
  ll n;
  cin >> n;
  cout << func(n) % 1000000007;
  return 0;
}