#include <iostream>
#include <vector>

using namespace std;

string join(vector<string> v, string sep) {
  string s = "";
  for (size_t i = 0; i < v.size() - 1; i++) {
    s = s + v[i] + sep;
  }

  return s + v[v.size() - 1];
}

int main(int argc, char const *argv[]) {
  std::vector<string> v = {"aaa", "bbb", "ccc"};
  cout << join(v, "/") << endl;
  return 0;
}
