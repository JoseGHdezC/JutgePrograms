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
  int result = 0;
  for (int i = 1; i <= number; ++i) {
    result = result + i * i;
  }
  //std::cout << "The result is: "
    std::cout << result << std::endl;
  return 0;
}