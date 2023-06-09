#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
  double number{0};
  std::cin >> number;
  std::cout << std::setprecision(0) << std::fixed << floor(number) << " " << ceil(number) << " " 
            << ((number - floor(number) >= 0.5) ? ceil(number) : floor(number)) << std::endl;
  return 0;
}