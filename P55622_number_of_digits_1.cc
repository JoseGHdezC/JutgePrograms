#include <iostream>

int main() {
  unsigned int number{0};
  unsigned digits{0};
  //std::cout << "Imtroduce a number: ";
  std::cin >> number;
  unsigned original_number = number;
  while (number >= 0) {
    ++digits;
    number = number / 10;
    if (number == 0) break;
  }
  std::cout << "The number of digits of " << original_number << " is " << digits << ".\n";
  return 0;
}