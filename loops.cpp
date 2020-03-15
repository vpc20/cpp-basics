#include <iostream>

using namespace std;

void while_x_times(string name, int x) {
  while (x > 0) {
    cout << name << endl;
    x--;
  }
}

void for_x_times(string name, int x) {
  for (size_t i = 0; i < x; i++) {
    cout << name << endl;
  }
}

int main() {
  string my_name = "vpc";
  int n = 3;

  cout << "while-loop" << endl;
  while_x_times(my_name, n);
  cout << endl << "for-loop" << endl;
  for_x_times(my_name, n);
}