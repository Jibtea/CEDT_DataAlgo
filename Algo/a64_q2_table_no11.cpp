#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector<ll> vec_ta(1000000000, 0);
ll table11(ll n) {
  if (n == 0)
    vec_ta[n] = 1;
  if (n == 1)
    vec_ta[n] = 3;
  if (n >= 2) {
    if (vec_ta[n] == 0) {
      vec_ta[n] =
          (2 * table11(n - 1) % 100000007) + (table11(n - 2) % 100000007);
    }
  }
  return vec_ta[n];
}
int main() {
  ll n;
  cin >> n;
  // 2(n-1)+n-2
  cout << (table11(n)) % 100000007;
  return 0;
}