#include <iostream>

using namespace std;

std::string even_or_odd(int num) { 
    return (num % 2 == 0) ? "Even" : "Odd"; 
}

int main() { 
    cout << even_or_odd(5) << endl;
    cout << even_or_odd(10) << endl;
}
