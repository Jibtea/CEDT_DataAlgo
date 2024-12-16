#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int fuc(vector<ll>& v, ll value, ll left, ll right) {
  if (left >= right) {
    return right;
  }
  ll mid = (left + right) / 2;
  if (v[mid] == value) {
    return mid;
  }
  if (value > v[mid]) {
    fuc(v, value, mid, right);
  } else {
    fuc(v, value, left, mid - 1);
  }
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
    cout << v_sum[fuc(v_sum, b + v_sum[a], a, v_sum.size() - 1)] -
                (fuc(v_sum, b + v_sum[a], a, v_sum.size() - 1) - a) * k
         << endl;
  }
  return 0;
}