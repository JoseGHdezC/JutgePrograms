#include <iostream>
#include <cmath>
#include <iomanip>

int main() { 
  double evaluation_number{0};
  double coefficient{0};
  double exponent{0};
  double result{0};
  std::cin >> evaluation_number;
  while (std::cin >> coefficient) {
    result += coefficient * pow(evaluation_number, exponent);
    ++exponent;
  }
  std::cout << std::fixed << std::setprecision(4) << result << std::endl;
  return 0;
}