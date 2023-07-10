#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  int base{0};
  int exponent{0};
  while (std::cin >> base >> exponent) {
    std::cout << std::fixed << std::setprecision(0) << pow(base, exponent) 
              << std::endl;
  }
  return 0;
}