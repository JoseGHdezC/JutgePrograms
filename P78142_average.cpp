#include <iostream>
#include <iomanip>

int main() {
  double number = 0;
  double average = 0;
  int number_ammount{0};
  while (std::cin >> number) {
    average = average + number;
    ++number_ammount;
  }
  std::cout << std::setprecision(2) << std::fixed << average / number_ammount << std::endl;
  return 0;
}