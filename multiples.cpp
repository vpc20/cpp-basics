#include <iostream>
#include <vector>

using namespace std;

vector<int> first_three_multiples(int num) {
  vector<int> v;

  for (int i = 0; i < 3; i++) {
    v.push_back(num * (i + 1));
  }
  return v;
}

int main() {
  for (int element : first_three_multiples(8)) {
    cout << element << "\n";
  }
}