#include <iostream>

int main() {
  int digit_sum{0};
  int number{0};
  int original_number{0};
  while (std::cin >> number) {
    original_number = number;
    digit_sum = 0;
    while (number > 0) {
      digit_sum += number % 10;
      number /= 10;
    }
    std::cout << "The sum of the digits of " << original_number 
              << " is " << digit_sum << "." << std::endl;
  }
  return 0;
}