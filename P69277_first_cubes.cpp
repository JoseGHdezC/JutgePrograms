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
  //std::cout << "First cubes: ";
  for (int i = 0; i <= number; ++i) {
    std::cout << i * i * i;
    if (i != number) {
      std::cout << ",";
    } else {
      std::cout << std::endl;
    }
  }
  return 0;
}