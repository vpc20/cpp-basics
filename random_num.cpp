#include <iostream>
#include <time.h>

int main() {

  // This seeds the random number generator:
  srand(time(NULL));

  // Use rand() below to initialize the_amazing_random_number
  int the_amazing_random_number = rand() % 100;
  std::cout << the_amazing_random_number;
 
}

