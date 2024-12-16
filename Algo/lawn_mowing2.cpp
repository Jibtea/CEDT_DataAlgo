#include "bits/stdc++.h"
#define ll long long
using namespace std;

int func(vector<ll>& v, ll value, ll left, ll right) {
  int mx = -1;
  while (right >= left) {
    int mid = (right + left) / 2;
    if (value >= v[mid]) {
      mx = mid;
      left = mid + 1;
    } else
      right = mid - 1;
  }
  return mx;
}

int main() {
  ll n, m, k, a;
  cin >> n >> m >> k;
  vector<ll> v_sum;
  cin >> a;
  v_sum.push_back(a + k);
  int i = 0;
  n -= 1;
  while (n--) {
    cin >> a;
    v_sum.push_back(v_sum[i++] + a + k);
  }
  while (m--) {
    ll b;
    cin >> a >> b;
    int x;
    if (a != 0) {
      x = func(v_sum, b + v_sum[a - 1], a - 1, v_sum.size() - 1);
    } else {
      x = func(v_sum, b, a, v_sum.size() - 1);
    }
    // cout << x;
    if (x == -1) {
      cout << 0 << "\n";
    } else {
      if (a != 0)
        // cout << x << endl;
        cout << v_sum[x] - v_sum[a - 1] - ((x + 1 - a) * k) << "\n";
      else
        // cout << x << endl;
        cout << v_sum[x] - ((x + 1) * k) << "\n";
    }
  }
  return 0;
}