#include <iostream>

int main() {
  int year, is_leap_year;

  std::cout << "Please input year: ";
  std::cin >> year;

  is_leap_year = false;
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) is_leap_year = true;

  if (is_leap_year)
    std::cout << year << " is a leap year\n";
  else
    std::cout << year << " is not a leap year\n";
}