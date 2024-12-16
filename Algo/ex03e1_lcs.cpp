#include <iostream>

using namespace std;

int func(string A, string B) {
  //
  int max = 0, alpha = 0;
  int i = 0;
  while (i != B.size()) {
    for (int j = alpha; j < A.size(); j++) {
      if (B[i] == A[j]) {
        alpha = j;
        max++;
        break;
      }
    }
    i++;
  }
  return max;
}

int main() {
  string A, B;
  cin >> A >> B;
  cout << func(A, B);

  return 0;
}