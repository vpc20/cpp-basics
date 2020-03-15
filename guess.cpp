#include <iostream>

int main() {
  int guess;

  int tries = 1;

  std::cout << "I have a number 1-10.\n";
  std::cout << "Please guess it: ";
  std::cin >> guess;

  while (guess != 8 && tries < 3) {
    std::cout << "Guess again: ";
    std::cin >> guess;
    tries++;
  }

  if (guess == 8) {
    std::cout << "You got it!\n";
  }
}