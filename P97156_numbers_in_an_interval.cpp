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
  int first_number = 0;
  int second_number = 0;
  std::cin >> first_number >> second_number;
  if (first_number <= second_number) {
    for (int i = first_number; i <= second_number; ++i) {
      std::cout << i;
      if (i != second_number) {
        std::cout << ",";
      } else {
        std::cout << std::endl;
      }
    }
  } else {
    std::cout << std::endl;
  }
  return 0;
}