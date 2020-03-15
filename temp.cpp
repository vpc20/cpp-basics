#include <iostream>
#include <set>
#include <vector>

using namespace std;

// int makeNegative(int n) { return -abs(n); }

// std::string no_space(std::string s) {
//   string r = "";
//   for (auto c : s) {
//     if (c != ' ') r.push_back(c);
//   }
//   return r;
// }

int getCount(const string& s) {
  int num_vowels = 0;
  string vowels = "aeiou";

  for (auto c : s) {
    if (vowels.find(c) != -1) {
      num_vowels++;
    }
  }

  return num_vowels;
}

int main() {
  // std::cout << makeNegative(1) << "\n";
  // std::cout << makeNegative(-5) << "\n";
  // std::cout << makeNegative(0) << "\n";

  // std::cout << no_space("abc def") << "\n";

  std::cout << getCount("abracadabra") << "\n";
  std::cout << getCount("abcde") << "\n";
}