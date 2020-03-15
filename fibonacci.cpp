#include <iostream>
#include <vector>

using namespace std;

int fib_recur(int n) {
  if (n < 2) return n;
  return fib_recur(n - 1) + fib_recur(n - 2);
}

int fib_dyna(int n) {
  if (n < 2) return n;

  vector<int> v(n + 1);
  v[0] = 0;
  v[1] = 1;
  for (size_t i = 2; i < n + 1; i++) {
    v[i] = v[i - 1] + v[i - 2];
  }
  return v.back();
}

// modified fib_dyna - vectors were removed
int fib_dynax(int n) {
  if (n < 2) return n;

  int prev = 0, curr = 1, temp;
  for (size_t i = 2; i <= n; i++) {
    temp = curr;
    curr = curr + prev;
    prev = temp;
  }
  return curr;
}

// different implementation
int fib(int n) {
  int curr = 0, nxt = 1, temp;
  for (size_t i = 0; i < n; i++) {
    temp = nxt;
    nxt = curr + nxt;
    curr = temp;
  }
  return curr;
}

int main() {
  // 0, 1, 1, 2, 3, 5, 8...
  cout << fib_recur(0) << " ";
  cout << fib_recur(1) << " ";
  cout << fib_recur(2) << " ";
  cout << fib_recur(3) << " ";
  cout << fib_recur(4) << " ";
  cout << fib_recur(5) << " ";
  cout << fib_recur(6) << endl;

  cout << fib_dyna(0) << " ";
  cout << fib_dyna(1) << " ";
  cout << fib_dyna(2) << " ";
  cout << fib_dyna(3) << " ";
  cout << fib_dyna(4) << " ";
  cout << fib_dyna(5) << " ";
  cout << fib_dyna(6) << endl;

  cout << fib_dynax(0) << " ";
  cout << fib_dynax(1) << " ";
  cout << fib_dynax(2) << " ";
  cout << fib_dynax(3) << " ";
  cout << fib_dynax(4) << " ";
  cout << fib_dynax(5) << " ";
  cout << fib_dynax(6) << endl;

  cout << fib(0) << " ";
  cout << fib(1) << " ";
  cout << fib(2) << " ";
  cout << fib(3) << " ";
  cout << fib(4) << " ";
  cout << fib(5) << " ";
  cout << fib(6) << endl;
}
