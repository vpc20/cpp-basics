#include <iostream>

using namespace std;

int main() {
  int num = 9000;

  // Create pointer
  int* ptr = &num;

  // Print ptr
  cout << "The value of n is " << num << endl;
  cout << "The memory address of n is " << &num << endl;
  cout << "The memory address of n is " << ptr << endl;
  cout << "The value in the pointer " << *ptr << endl;
  cout << "The size of pointer is " << sizeof(ptr) << endl;
}