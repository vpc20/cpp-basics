#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<double> v = {1, 2, 3};

  v.push_back(4);
  v.push_back(5);
  v.push_back(6);

  double total = 0.0;

  for (int i = 0; i < v.size(); i++) {
    total = total + v[i];
  }

  cout << "Total: " << total << endl;
  cout << "Ave: " << total / v.size();
}