#include <iostream>

using namespace std;

int fib_recur(int n) {
  if (n < 2) return 1;
  return n * fib_recur(n - 1);
}

int main() {
  cout << fib_recur(0) << endl;
  cout << fib_recur(1) << endl;
  cout << fib_recur(2) << endl;
  cout << fib_recur(3) << endl;
  cout << fib_recur(4) << endl;
  cout << fib_recur(5) << endl;
}
