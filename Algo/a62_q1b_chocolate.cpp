#include <iostream>
#include <vector>
#define ll long long
using namespace std;

ll choco(vector<ll>& v, ll& n) {
  //
  vector<ll> sum(n + 1, 0);
  sum[0] = 1;
  for (int i = 1; i <= n; i++) {
    for (auto x : v) {
      if (i >= x) {
        sum[i] = (sum[i] + sum[i - x]) % 1000003;
      }
    }
  }
  return sum[n];
}

int main() {
  ll n, k, a;
  vector<ll> v;
  cin >> n >> k;
  for (int i = 0; i < k; i++) {
    cin >> a;
    v.push_back(a);
  }
  cout << choco(v, n) % 1000003;

  return 0;
}