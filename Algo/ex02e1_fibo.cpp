#include <iostream>
#include <vector>

using namespace std;

int table[10000];
int fibo(int n) {
  if (n == 1 || n == 0) {
    return n;
  }
  if (n >= 2) {
    if (table[n] > 0) {
      return table[n];
    } else {
      table[n] = fibo(n - 1) + fibo(n - 2);
      return table[n];
    }
  }
}

int main() {
  int n;
  // vector<int> vv;
  cin >> n;
  cout << fibo(n);
  return 0;
}