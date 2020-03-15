#include <iostream>
#include <vector>

using namespace std;

int positive_sum(const std::vector<int> arr) {
  int sum = 0;
  for (auto e : arr) {
    if (e > 0) sum = sum + e;
  }
  return sum;
}

int main() {
  std::cout << positive_sum(std::vector<int>{1, 2, 3, 4, 5}) << "\n";
}