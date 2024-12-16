#include <bits/stdc++.h>
#define ll long long
using namespace std;

int findRoot(map<int, int>& mRoot, int x) {
  if (mRoot[x] != x) {
    mRoot[x] = findRoot(mRoot, mRoot[x]);
  }
  return mRoot[x];
}

int main() {
  int n;
  cin >> n;
  priority_queue<pair<ll, pair<int, int>>> p_weight;
  vector<int> just_input;
  map<int, int> mRoot;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    just_input.push_back(a);
    mRoot[a] = a;
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      ll c = just_input[i] ^ just_input[j];
      // cout << just_input[i] << "::" << just_input[j] << ":" << c << "\n";
      p_weight.push({c, {just_input[i], just_input[j]}});
    }
  }
  int e = 0;
  ll sum = 0;
  for (int i = 0; i < p_weight.size(); i++) {
    if (e == n - 1) {
      break;
    }
    int a, b;
    a = p_weight.top().second.first;
    b = p_weight.top().second.second;
    ll gg = p_weight.top().first;
    a = findRoot(mRoot, mRoot[a]);
    b = findRoot(mRoot, mRoot[b]);
    p_weight.pop();
    if (a != b) {
      mRoot[a] = b;
      // cout << "he" << "\n";
      sum += gg;
      e++;
    }
  }
  cout << sum;

  return 0;
}