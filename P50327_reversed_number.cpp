/**
 * @author: José Gregorio Hernández Cruz
 * @date:
 * @email:
 * @file:
 * @brief:
 * @bug: Needs revision
 * @see:
 */

#include <iostream>

int main() {
  int number = 0;
  //std::cout << "Introduce a number: ";
  std::cin >> number;
  //std::cout << "Reversed number: ";
  if (number != 0) {
    while (number > 0) {
      std::cout << number % 10;
      number = number / 10;
    }
    std::cout << std::endl;
  } else {
    std::cout << number << std::endl;
  }
  return 0;
}