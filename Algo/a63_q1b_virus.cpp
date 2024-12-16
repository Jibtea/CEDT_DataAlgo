#include <math.h>
#include <iostream>
#include <vector>

using namespace std;

bool virus(vector<int>& vv) {
  int mid = vv.size() / 2;
  if (vv.size() == 4) {
    // check
    int sum_1 = 0, sum_2 = 0;
    for (int i = 0; i < mid; i++) {
      if (vv[i] == 1)
        sum_1++;
    }
    for (int i = mid; i < vv.size(); i++) {
      if (vv[i] == 1)
        sum_2++;
    }
    if (sum_1 <= (sum_2 + 1) && sum_1 >= (sum_2 - 1)) {
      return true;
    } else {
      return false;
    }
  }
  // crack l r

  vector<int> l, r;
  for (int i = 0; i < mid; i++) {
    l.push_back(vv[i]);
  }
  for (int i = mid; i < vv.size(); i++) {
    r.push_back(vv[i]);
  }
  if (virus(l) && virus(r)) {
    int sum_1 = 0, sum_2 = 0;
    for (int i = 0; i < mid; i++) {
      if (vv[i] == 1)
        sum_1++;
    }
    for (int i = mid; i < vv.size(); i++) {
      if (vv[i] == 1)
        sum_2++;
    }
    if (sum_1 <= (sum_2 + 1) && sum_1 >= (sum_2 - 1)) {
      return true;
    } else {
      return false;
    }
  } else {
    return false;
  }
}
int main() {
  int n, k;
  cin >> n >> k;
  int SIZE = pow(2, k);
  while (n--) {
    vector<int> vv;
    int a;
    for (int i = 0; i < SIZE; i++) {
      cin >> a;
      vv.push_back(a);
    }
    // cout << n << endl;
    (virus(vv)) ? cout << "yes" << endl : cout << "no" << endl;
  }
}