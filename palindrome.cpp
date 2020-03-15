#include <iostream>

bool is_palindrome(std::string s) {
  for (int i = 0; i < s.size() / 2; i++) {
    if (s[i] != s[s.size() - i - 1])
      return false;
  }
  return true;
}

int main() {
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("x") << "\n";
  std::cout << is_palindrome("aa") << "\n";
  std::cout << is_palindrome("abba") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
}