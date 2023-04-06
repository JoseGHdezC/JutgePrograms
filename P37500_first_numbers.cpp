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
  //std::cout << "The first numbers are:" << std::endl;
  for (int i = 0; i <= number; ++i) {
    std::cout << i << std::endl;
  }
  return 0;
}