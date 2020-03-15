#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n = 5;
  char grade = 'A';
  bool is_leap_year = true;
  float price = 1.99;
  double pi = 3.141592654;

  cout << "Size of char : " << sizeof(char) << endl;
  cout << "Size of int : " << sizeof(int) << endl;
  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of long int : " << sizeof(long int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  cout << "Size of double : " << sizeof(double) << endl;
  cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

  typedef int feet;
  feet distance;

  enum color { red, green, blue } c;
  c = blue;
  if (c == blue) {
    cout << "the color is blue" << endl;
    cout << c << endl;
  }

  return 0;
}
